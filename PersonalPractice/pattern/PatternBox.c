#include <stdio.h>
int main() {
  int row, col, p = 0;
  scanf("%d", &p);
  for (row = 1; row <= p; row++) {
    for (col = 1; col <= p; col++) {
      if (row == 1 || col == 1 || row == p || col == p) {
        printf("* ");
      } else {
        printf("  ");
      }
    }
    printf("\n");
  }
  return 0;
}