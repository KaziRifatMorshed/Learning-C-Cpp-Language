#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int i;
  for (i = 1000; i >= 1; i -= 5) {
    printf("%d\t%d\t%d\t%d\t%d\n", i, i - 1, i - 2, i - 3, i - 4);
  }

  return 0;
}