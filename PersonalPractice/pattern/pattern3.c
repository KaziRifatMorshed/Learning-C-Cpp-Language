#include "stdio.h"
// 1
// 10
// 101
// 1010
// 10101
void main() {
  int n = 0, row, col;
  printf("n=");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (col = 1; col <= row; col++) {
      printf("%d ", col % 2);
    }
    printf("\n");
  }
}
