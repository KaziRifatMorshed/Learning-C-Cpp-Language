#include <cstdio>
#include <cstdlib>
// #include <cuda_runtime.h>

#define SIZE 1024

__global__ void VectorAdd(int *a, int *b, int *c, int n) {
  int i = blockIdx.x;
  if (i < n) {
    c[i] = a[i] + b[i];
  }
}

int main(void) {
  int *a, *b, *c;
  cudaError_t err;

  // Allocate Unified Memory – accessible from CPU or GPU
  err = cudaMallocManaged(&a, SIZE * sizeof(int));
  if (err != cudaSuccess) {
    fprintf(stderr, "Failed to allocate memory for a (error code %s)!\n",
            cudaGetErrorString(err));
    exit(EXIT_FAILURE);
  }

  err = cudaMallocManaged(&b, SIZE * sizeof(int));
  if (err != cudaSuccess) {
    fprintf(stderr, "Failed to allocate memory for b (error code %s)!\n",
            cudaGetErrorString(err));
    cudaFree(a);
    exit(EXIT_FAILURE);
  }

  err = cudaMallocManaged(&c, SIZE * sizeof(int));
  if (err != cudaSuccess) {
    fprintf(stderr, "Failed to allocate memory for c (error code %s)!\n",
            cudaGetErrorString(err));
    cudaFree(a);
    cudaFree(b);
    exit(EXIT_FAILURE);
  }

  // Initialize vectors
  for (int i = 0; i < SIZE; i++) {
    a[i] = i;
    b[i] = i;
    c[i] = 0;
  }

  // Set the kernel launch parameters
  //   int threadsPerBlock = 256;
  //   int blocksPerGrid = (SIZE + threadsPerBlock - 1) / threadsPerBlock;
  int threadsPerBlock = 1;
  int blocksPerGrid = SIZE;

  // Launch the kernel
  VectorAdd<<<blocksPerGrid, threadsPerBlock>>>(a, b, c, SIZE);

  // Check for any errors launching the kernel
  err = cudaGetLastError();
  if (err != cudaSuccess) {
    fprintf(stderr, "Failed to launch VectorAdd kernel (error code %s)!\n",
            cudaGetErrorString(err));
    cudaFree(a);
    cudaFree(b);
    cudaFree(c);
    exit(EXIT_FAILURE);
  }

  // Wait for the GPU to finish
  err = cudaDeviceSynchronize();
  if (err != cudaSuccess) {
    fprintf(stderr,
            "cudaDeviceSynchronize returned error code %s after launching "
            "VectorAdd!\n",
            cudaGetErrorString(err));
    cudaFree(a);
    cudaFree(b);
    cudaFree(c);
    exit(EXIT_FAILURE);
  }

  // Print the result
  for (int i = 0; i < 10; i++) {
    printf("c[%d] = %d\n", i, c[i]);
  }

  // Free memory
  cudaFree(a);
  cudaFree(b);
  cudaFree(c);

  return 0;
}
// ".cu": "cd $dir && nvcc $fileName -o $fileNameWithoutExt -arch=sm_86 &&
// $dir$fileNameWithoutExt",