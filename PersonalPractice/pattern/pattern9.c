#include "stdio.h"
// incomplete
int main() {
  int n, row, column;
  printf("n = ");
  scanf("%d", &n);
  printf("123456789\n");
  for (row = 1; row <= n; row++) { // line
    // Whitespace
    for (column = 1; column <= n - row; column++) { // remember
      printf(" ");
    }
    // Characters
    for (column = n; column > n - row; column--) { // remember
      printf("%c", n - column + 65);               // shit man !!!
    }
    printf("\n");
  }

  // second half
  for (row = 2; row <= n; row++) {
    // whitespace
    for (column = 1; column <= row - 1; column++) {
      printf("-");
    }
    for (column = 1; column <= row - 1; column++) { // incomplete
      printf("%c", column + 65);
    }
    printf("\n");
  }

  return 0;
}