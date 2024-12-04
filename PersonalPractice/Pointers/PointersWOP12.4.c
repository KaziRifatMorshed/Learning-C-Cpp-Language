#include "stdio.h"
#include "string.h"
#include <inttypes.h>

int main(void) {
  int sum, i = 0, *p;
  int x[5] = {5, 9, 6, 3, 7};
  p = x;
  printf("Element\tValue\tAddress\n");

  while (i < 5) {
    printf("x[%d]\t%d\t%u\n", i, *p, p);
    sum += *p;
    i++;
    p++;
  }
  printf("\nSUM = %d", sum);
  printf("\n&x[0] = %u", &x[0]);
  printf("\np = %u", p);
}
/*
Element Value   Address
x[0]    5       2781880848
x[1]    9       2781880852
x[2]    6       2781880856
x[3]    3       2781880860
x[4]    7       2781880864

SUM = 30
&x[0] = 2781880848
p = 2781880868⏎
*/