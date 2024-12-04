#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int n = 0, i, first = 2, second = 1, next = 0;
  printf("Lucus Series of n times, input n =");
  scanf("%d", &n);

  printf("%d %d ", first, second);
  for (i = 3; i <= n; i++) {
    next = first + second;
    printf("%d ", next);
    first = second;
    second = next;
  }
  return 0;
}