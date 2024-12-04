#include "stdio.h"
#include <inttypes.h>

// printf("");
// scanf("%",&);
int main() {
  int T=0, N=0, i, j;
  scanf("%d", &T);
  for (i = 1; i <= T; i++) { // koto bar colbe

    scanf("%d", &N);
    printf("case %d:",i);

    for (j = 1; j <= N; j++) {
      if (N % j == 0) {
        printf(" %d", j);
      }
    } printf("\n");
  }
  return 0;
}