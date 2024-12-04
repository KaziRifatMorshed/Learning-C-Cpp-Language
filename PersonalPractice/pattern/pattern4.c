#include "stdio.h"
// 1
// 00
// 111
// 0000
// 11111
void main() {
  int n = 0, row, col;
  printf("n=");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", row % 2);
    }
    printf("\n");
  }
}
