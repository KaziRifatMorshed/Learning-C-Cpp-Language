#include <cmath>
// #include <iomanip>
#include <cstdio>
#include <iostream>
// #include <ostream>

__global__ void add(int n, float *x, float *y) {
  for (int i = 0; i < n; i++) {
    y[i] += x[i];
  }
}

void fmain(void) {
  // std::cout << "hi CUDA" << std::endl;

  int N = 1 << 20;
  // float *x = new float[N], *y = new float[N];
  float *x, *y;
  cudaMallocManaged(&x, N * sizeof(float));
  cudaMallocManaged(&y, N * sizeof(float));

  for (int i = 0; i < N; i++) {
    x[i] = 1.0f, y[i] = 2.0f;
  }

  // add(N, x, y);
  int second_parameter = 32 * 5;
  printf("%d\n", second_parameter);
  add<<<1, second_parameter>>>(N, x, y);
  cudaDeviceSynchronize(); // prbably to avoid race condition

  // Error checking
  float maxError = 0.0f;
  for (int i = 0; i < N; i++) {
    maxError = fmax(fabs(y[i] - 3.0f), maxError);
  }
  // std::cout << std::setprecision(6);
  std::cout << "Max error is : " << maxError << std::endl;

  // delete[] x, delete[] y;
  cudaFree(x), cudaFree(y);
  //
}

int main(void) {
  int t = 15;
  while (t--) {
    fmain();
    cudaDeviceSynchronize();
  }
}