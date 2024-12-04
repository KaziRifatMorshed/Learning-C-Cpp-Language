/*
1
2 3
4 5 6
7 8 9 0
1 2 3 4 5
6 7 8 9 0
*/

#include <stdio.h>
int main(void) {
  int col_counter = 0, col_limiter = 1;
  for (int i = 1; i <= 20; i++) {
    printf("%d ", (i % 10));
    col_counter++;
    if (col_counter == col_limiter) {
      printf("\n");
      col_limiter++;
      col_counter = 0;
    }
  }
  printf("\n");
} // DONE