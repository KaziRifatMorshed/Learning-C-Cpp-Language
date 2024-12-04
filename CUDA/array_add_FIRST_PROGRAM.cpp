// #include <__clang_cuda_runtime_wrapper.h>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <ostream>

// __global__
void add(int n, float *x, float *y) {
  for (int i = 0; i < n; i++) {
    y[i] += x[i];
  }
}

int main(void) {
  std::cout << "hi CUDA" << std::endl;

  int N = 1 << 20;
  float *x = new float[N], *y = new float[N];

  for (int i = 0; i < N; i++) {
    x[i] = 1.0f, y[i] = 2.0f;
  }

  add(N, x, y);

  // Error checking
  float maxError = 0.0f;
  for (int i = 0; i < N; i++) {
    maxError = fmax(fabs(y[i] - 3.0f), maxError);
  }
  std::cout << std::setprecision(6);
  std::cout << "Max error is : " << maxError << std::endl;

  delete[] x, delete[] y;
  //
}