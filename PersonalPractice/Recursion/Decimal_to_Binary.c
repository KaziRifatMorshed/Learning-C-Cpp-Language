#include <stdio.h>

int Decimal_to_Binary_RECURSIVE(int i) {
  if (i == 0)
    return 0;
  return Decimal_to_Binary_RECURSIVE(i / 2) * 10 + i % 2;
}

int main(void) {
  int i = 0;
  scanf("%d", &i);
  printf("the binary of the decimal num %d is %d", i,
         Decimal_to_Binary_RECURSIVE(i));
} // DONE