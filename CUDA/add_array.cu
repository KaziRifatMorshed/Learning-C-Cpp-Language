#include <cstdio>
#include <cstdlib>
#include <cuda.h>

#define SIZE 1024

__global__ void VectorAdd(int *a, int *b, int *c, int n) {
  int i = threadIdx.x;
  if (i < n) {
    c[i] = a[i] + b[i];
  }
}

/*
".cu": "cd $dir && nvcc $fileName -o $fileNameWithoutExt -arch=sm_86 &&
$dir$fileNameWithoutExt",
*/
int main(void) {
  int *a, *b, *c;

  cudaMallocManaged(&a, SIZE * sizeof(int)),
      cudaMallocManaged(&b, SIZE * sizeof(int)),
      cudaMallocManaged(&c, SIZE * sizeof(int));

  for (int i = 0; i < SIZE; i++) {
    a[i] = b[i] = i;
    c[i] = 0;
  }

  int threadsPerBlock = 256;
  int blocksPerGrid = (SIZE + threadsPerBlock - 1) / threadsPerBlock;

  // VectorAdd<<<1, SIZE>>>(a, b, c, SIZE); // <<<1, SIZE>>> WAS AN ERROR
  VectorAdd<<<blocksPerGrid, threadsPerBlock>>>(a, b, c, SIZE);

  // Kernel execution happens here

  cudaDeviceSynchronize(); // Wait for kernel to finish

  for (int i = 0; i < 10; i++) {
    printf("c[%d] = %d\n", i, c[i]);
  }

  cudaFree(a), cudaFree(b), cudaFree(c);
} // WORKING
