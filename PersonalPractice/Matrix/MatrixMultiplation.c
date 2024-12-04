#include <stdio.h>

void MatrixMulFunction(int m, int n, int k, float *A, float *B, float *C) {
  for (int row = 0; row < m; row++) {
    for (int col = 0; col < k; col++) {
      float sum = 0;
      for (int i = 0; i < n; i++) {
        float a = A[row * n + i];
        float b = B[i * k + col];
        sum += a * b;
      }
      C[row * k + col] = sum;
    }
  }
}

int main(void) {
  float A[3][3] = {{2, 3, 4}, {3, 5, 6}, {4, 5, 3}};
  float B[3][3] = {{1, 2, 1}, {-1, 2, 1}, {3, 2, 1}};
  float C[3][3] = {0};

  MatrixMulFunction(3, 3, 3, (float *)A, (float *)B, (float *)C);

  printf("Matrix Multiplication in C\nPrinting Result:\n");
  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      printf("%2.2f\t", C[i][j]);
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
