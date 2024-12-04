#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int T = 0, i = 0, N = 0;
  //printf("\ninput how many times you want to test it=");
  scanf("%d", &T);
  for (i = 1; i <= T; i++) {
    //printf("\ninput number=");
    scanf("%d", &N);
    if (N % 2 == 0) {
      printf("even");
    } else {
      printf("odd");
    }
  }
  return 0;
}