#include "stdio.h"
// incomplete
int main() {
  int r1 = 0, c1 = 0, r2 = 0, c2 = 0, i, j, k, sum;
  printf("welcome to matrix multiplication table\n");
  //
  do {
    printf(
        "NOTE: max input 10x10;invalid input may ask to input data again...\n");
    printf("input row1 and column1: ");
    scanf("%d %d", &r1, &c1);
    printf("input row2 and column2: ");
    scanf("%d %d", &r2, &c2);
  } while (c1 != r2);
  //
  int M1[10][10], M2[10][10], product[10][10];
  //  int M1[r1][c1], M2[r2][c2], product[r1][c2];
  //
  // input first matrix
  printf("input first matrix: ");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      scanf("%d", &M1[i][j]);
    }
  }
  //
  // input second matrix
  printf("input second matrix:");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      scanf("%d", &M2[i][j]);
    }
  }
  //
  // print first matrix
  printf("it is first matrix:\n ");
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c1; j++) {
      printf("%d ", M1[i][j]);
    }
    printf("\n");
  }
  //
  // print second matrix
  printf("it is second matrix:\n ");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      printf("%d ", M2[i][j]);
    }
    printf("\n");
  }
  //
  // calculate product
  {}

  //
  // print result product matrix
  printf("it is PRODUCT matrix: \n");
  for (i = 0; i < r2; i++) {
    for (j = 0; j < c2; j++) {
      printf("%d ", product[i][j]);
    }
    printf("\n");
  }
  return 0;
}

/*
  for (i = 0; i < r1; i++) {
    for (j = 0; j < c2; j++) {
      for (k = 0; k < c1; k++) { // carful, k < C1
        sum = sum + M1[i][k] + M2[k][j];
      }
      product[i][j] = sum; // careful
      sum = 0;             // careful
    }
  }
*/
// incomplete