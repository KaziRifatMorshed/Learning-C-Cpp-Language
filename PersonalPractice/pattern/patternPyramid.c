#include <stdio.h>
int main(void) {
  int m = 0, row = 0, col = 0;
  scanf("%d", &m);
  for (row = 1; row <= m; row++) {
    for (col = m - row; col > 0; col--) { // !
                                          // Space will be decreased
                                          // MAX(inputted m) minus ROW
                                          // Will be i-- and upto zero
      printf(" ");
    }
    for (col = 1; col <= (2 * row - 1); col++) {
      printf("^");
    }
    printf("\n");
  }
} // done
  /*
  10
           *
          ***
         *****
        *******
       *********
      ***********
     *************
    ***************
   *****************
  *******************
  */