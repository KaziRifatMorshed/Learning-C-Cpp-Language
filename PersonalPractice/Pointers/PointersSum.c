#include "stdio.h"
#include "string.h"

void calculations();

int main(void) {
  int a = 14, b = 5, s, d;
  calculations(a, b, &s, &d);
  printf("a=%d, b=%d, s=%d, d=%d", a, b, s, d);
}

void calculations(int num1, int num2, int *sum, int *diff) {
  *sum = num1 + num2;
  *diff = num1 - num2;
}
\\done
\\works