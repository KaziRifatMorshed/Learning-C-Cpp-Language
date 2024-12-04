#include "stdio.h"

// printf("Leap Year");
// scanf("%",&);
int main() {
  int year = 0;
  printf("test leap year, inpyt year = ");
  scanf("%d", &year);
  if (year % 400 == 0) {
    printf("Leap Year");
  } else {
    if (year % 4 == 0 && year % 100 != 0) {
      printf("Leap Year");
    } else {
      printf(" NOT Leap Year");
    }
  }
  return 0;
}