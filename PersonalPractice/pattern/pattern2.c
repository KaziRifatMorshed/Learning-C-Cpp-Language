#include "stdio.h"
// 1
// 22
// 333
// 4444
// 55555
void main() {
  int n = 0, row, col;
  printf("n=");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", row);
    }
    printf("\n");
  }
}
