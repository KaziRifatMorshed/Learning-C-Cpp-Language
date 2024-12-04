#include "stdio.h"

int main() {
  int num = 0, count;
  printf("input your number= ");
  scanf("%d", &num);
  for (count = 0; num != 0; count++) {
    num /= 10;
  }
  printf("total %d digits", count);
  return 0;
} // DONE