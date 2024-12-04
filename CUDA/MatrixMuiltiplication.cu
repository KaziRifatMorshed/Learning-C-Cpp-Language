#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cuda.h>
#include <stdio.h>

// void MatrixMulFunction(int m, int n, int k, float *A, float *B, float *C) {
//   for (int row = 0; row < m; row++) {
//     for (int col = 0; col < k; col++) {
//       float sum = 0;
//       for (int i = 0; i < n; i++) {
//         float a = A[row * n + i];
//         float b = B[i * k + col];
//         sum += a * b;
//       }
//       C[row * k + col] = sum;
//     }
//   }
// }

__global__ void MatrixMulFunction(int m, int n, int k, float *A, float *B,
                                  float *C) {
  int row = blockIdx.y * blockDim.y + threadIdx.y;
  int col = blockIdx.x * blockDim.x + threadIdx.x;

  if ((row < m) && (col < k)) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
      sum += A[row * m + i] * B[col + k * i];
    }
    C[row * n + col] = sum;
  }
}

int main(void) {

  float *d_A, *d_B, *d_C;
  size_t mem_size_for_matrix = 3 * 3 * sizeof(float);
  cudaError_t e1 = cudaMallocManaged(&d_A, mem_size_for_matrix);
  cudaError_t e2 = cudaMallocManaged(&d_B, mem_size_for_matrix);
  cudaError_t e3 = cudaMallocManaged(&d_C, mem_size_for_matrix);

  if (e1 != cudaSuccess || e2 != cudaSuccess || e3 != cudaSuccess) {
    printf("error in file %s (and %d is a line)", __FILE__, __LINE__);
    printf("Mem allocation error: \"%s : %s\"", cudaGetErrorName(e1),
           cudaGetErrorString(e1));
    // return 1;
    exit(EXIT_FAILURE);
  }

  float h_A[3][3] = {{2, 3, 4}, {3, 5, 6}, {4, 5, 3}};
  float h_B[3][3] = {{1, 2, 1}, {-1, 2, 1}, {3, 2, 1}};
  float h_C[3][3];

  // copy from Host RAM to GPU RAM
  cudaMemcpy(d_A, h_A, mem_size_for_matrix, cudaMemcpyHostToDevice);
  cudaMemcpy(d_B, h_B, mem_size_for_matrix, cudaMemcpyHostToDevice);

  // define block size and grid size
  // dim3 threadsPerBlock(16, 16, 0);
  dim3 threadsPerBlock(16, 16);
  dim3 numBlocks(((3 + threadsPerBlock.x - 1) / threadsPerBlock.x),
                 (3 + threadsPerBlock.y - 1) / threadsPerBlock.y);

  // launch cuda kernel
  MatrixMulFunction<<<numBlocks, threadsPerBlock>>>(3, 3, 3, (float *)d_A,
                                                    (float *)d_B, (float *)d_C);

  cudaDeviceSynchronize();
  cudaMemcpy(h_C, d_C, mem_size_for_matrix, cudaMemcpyDeviceToHost);

  cudaFree(d_A), cudaFree(d_B), cudaFree(d_C);

  printf("Matrix Multiplication in CUDA C\nPrinting Result:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%2.2f\t", h_C[i][j]);
    }
    printf("\n");
  }
} // DONE
/*
Result
11 18 9
16 28 14
8 24 12
*/

/*
The provided code has a few issues that need to be corrected for it to work
correctly with CUDA. Here's the revised version:

1. The memory needs to be allocated on the GPU.
2. The memory needs to be copied to the GPU before the kernel launch.
3. The memory needs to be copied back from the GPU after the kernel execution.
4. Correcting the indexing in the kernel function.

Here's the corrected code:

```c
#include <cuda_runtime.h>
#include <stdio.h>

__global__ void MatrixMulFunction(int m, int n, int k, float *A, float *B, float
*C) { int row = blockIdx.y * blockDim.y + threadIdx.y; int col = blockIdx.x *
blockDim.x + threadIdx.x;

  if ((row < m) && (col < k)) {
    float sum = 0.0f;
    for (int i = 0; i < n; i++) {
      sum += A[row * n + i] * B[i * k + col];
    }
    C[row * k + col] = sum;
  }
}

int main(void) {
  int m = 3, n = 3, k = 3;
  float A[3][3] = {{2, 3, 4}, {3, 5, 6}, {4, 5, 3}};
  float B[3][3] = {{1, 2, 1}, {-1, 2, 1}, {3, 2, 1}};
  float C[3][3] = {0};

  float *d_A, *d_B, *d_C;
  size_t size = m * n * sizeof(float);

  // Allocate memory on the GPU
  cudaMalloc(&d_A, size);
  cudaMalloc(&d_B, size);
  cudaMalloc(&d_C, size);

  // Copy matrices A and B to the GPU
  cudaMemcpy(d_A, A, size, cudaMemcpyHostToDevice);
  cudaMemcpy(d_B, B, size, cudaMemcpyHostToDevice);

  // Define the block size and grid size
  dim3 threadsPerBlock(16, 16);
  dim3 numBlocks((k + threadsPerBlock.x - 1) / threadsPerBlock.x,
                 (m + threadsPerBlock.y - 1) / threadsPerBlock.y);

  // Launch the kernel
  MatrixMulFunction<<<numBlocks, threadsPerBlock>>>(m, n, k, d_A, d_B, d_C);

  // Copy the result matrix C back to the host
  cudaMemcpy(C, d_C, size, cudaMemcpyDeviceToHost);

  // Free GPU memory
  cudaFree(d_A);
  cudaFree(d_B);
  cudaFree(d_C);

  // Print the result
  printf("Matrix Multiplication in CUDA C\nPrinting Result:\n");
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < k; j++) {
      printf("%2.2f\t", C[i][j]);
    }
    printf("\n");
  }

  return 0;
}
```

### Explanation:

1. **Memory Allocation**: The matrices `A`, `B`, and `C` are allocated on the
GPU using `cudaMalloc`.
2. **Memory Copy to GPU**: The matrices `A` and `B` are copied from the host to
the GPU using `cudaMemcpy`.
3. **Kernel Execution**: The kernel is launched with a grid and block
configuration.
4. **Memory Copy to Host**: The result matrix `C` is copied back from the GPU to
the host using `cudaMemcpy`.
5. **Free GPU Memory**: The allocated GPU memory is freed using `cudaFree`.

This code should now correctly perform matrix multiplication using CUDA and
print the result.
*/