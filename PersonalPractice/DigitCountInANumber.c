#include <stdio.h>

int checker(unsigned int num) {
  int count;
  for (count = 0; num != 0; count++) {
    num /= 10;
  }
  return count;
}

int main(void) {
  unsigned int num = 0;
  scanf("%u", &num);
  printf("there are total %d digits in %u", checker(num), num);
}