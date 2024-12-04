#include "stdio.h"
#include <stdlib.h>
#include <string.h>
int main(void) {
  int row, col, brk = 0, steps = 0; // 0 to 5, total 6
  int mat[6][6];
  //_Bool brk;

  // input first
  for (row = 1; row <= 5; row++) {
    for (col = 1; col <= 5; col++) {
      scanf("%d", &mat[row][col]);
    }
  }

  // find that 1
  for (row = 1; row <= 5; row++) {
    for (col = 1; col <= 5; col++) {
      if (mat[row][col] == 1) {
        brk++; // break in line22 will break column-loop, using this brk++ to
               // break row-runing-loop
        break;
      }
    }
    if (brk) {
      break;
    }
  }
  steps = abs(3 - row) + abs(3 - col); // the main line 
  printf("%d", steps);

} // DONE

/*

TRASH !!! Do not follow this !!!!!
  if (row == 3 && col == 3) {
    printf("%d", steps);
  } else {
    if (row > 3 || row < 3) {
      steps = abs(3 - row);
    }
    if (col > 3 || col < 3) {
      steps += abs(3 - col);
      printf("%d", steps);
    }
  }
*/