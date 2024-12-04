#include "stdio.h"
//      1
//     12
//    123
//   1234
//  12345
//........many
// thanks to seam vai
void main() {
  int n = 0, row, col;
  printf("n=");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {

    for (col = 1; col <= n - row; col++) {
      printf("   ");
      // since i am printing a space between every digits, i need
      // to use four spaces instead of one spaces in this line
    }
    for (col = 1; col <= row; col++) {
      printf("%2c ", col + 64); // plus 64 for ASCII characters
      // careful, here is a space after this line and %2d here
    }
    printf("\n");
  }
}
//=========================================================================
// #include <stdio.h>
//
// int main() {
//  int n, i, j, k;
//  scanf("%d", &n);
//
//  for (i = 1; i <= n; i++) {
//    for (j = i; j <= n - 1; j++) {
//      printf("   ");
//    }
//    for (k = 1; k <= i; k++) {
//      printf("%2d ", k);
//    }
//
//    printf("\n");
//  }
//
//  return 0;
//}