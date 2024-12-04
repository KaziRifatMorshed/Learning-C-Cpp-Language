#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int i, j;
  printf("%d\n", scanf("%d", &j));
  // scanf("%", &);
  switch (scanf("%d", &i)) {
  case 1:
    printf("it is 1\n");
    break;
  case 11:
    printf("this is 1 AGAIN\n");
    break;
  default:
    printf("Default\n");
    break;
  }

  return 0;
}