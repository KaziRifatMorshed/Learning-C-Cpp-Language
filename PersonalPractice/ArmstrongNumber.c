#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int i, input1 = 0, temp = 0, sum = 0, r = 0;
  printf("input number to check armstrong=");
  scanf("%d", &input1);
  temp = input1;
  for (i = 0; temp != 0; i++) {
    r = temp % 10;
    sum = sum + r * r * r; // only difference
    temp /= 10;
  }
  if (input1 == sum) { // careful, not input1 == temp
    printf("Hurrah ! It is armstrong !!!");
  } else {
    printf("Sorry, not a armstrong");
  }

  // printf("sum = %d", sum);
  return 0;
}