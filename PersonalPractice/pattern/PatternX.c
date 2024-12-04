#include <stdio.h>
int main() {
  int row, col, p = 0;
  scanf("%d", &p);
  for (row = 1; row <= p; row++) {
    for (col = 1; col <= p; col++) {
      if (row == col || col == p - row + 1) {
        printf("*");
      } else if (row != col) {
        printf(" ");
      }
    }
    printf("\n");
  }
  return 0;
}