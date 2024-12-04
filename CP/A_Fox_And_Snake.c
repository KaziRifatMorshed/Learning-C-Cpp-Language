#include <stdio.h>
int main(void) {
  int n = 0, m = 0;
  scanf("%d %d", &n, &m);
  for (int row = 1; row <= n; row++) {
    // thanks to siam ahmed for "2 vs 4" which led me to start indexing from 1
    // i was thinking to indx from 0
    for (int col = 1; col <= m; col++) {
      if (row % 2 != 0) {
        printf("#");
      }
      //
      if (row % 2 == 0 && row % 4 != 0 && col < m) {
        printf(".");
      }
      if (row % 2 == 0 && row % 4 != 0 && col == m) {
        printf("#");
      }
      //
      if (row % 2 == 0 && row % 4 == 0 && col == 1) {
        printf("#");
      }
      if (row % 2 == 0 && row % 4 == 0 && col > 1) {
        printf(".");
      }
    }
    printf("\n");
    //
  }
} // done