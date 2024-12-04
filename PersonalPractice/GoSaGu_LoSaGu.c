#include "stdio.h"

int main() {
  int a = 0, b = 0, i, GCD = 0, LCM = 0, r;

  printf("input 2 numbers to find out GoSaGu and LoSaGu together:\n (first "
         "number then space then second number then hit enter)...");
  scanf("%d %d", &a, &b);

  if (a == 0) {
    GCD = 0;
    LCM = 0;

  } else if (b == 0) {
    GCD = 0;
    LCM = 0;

  } else {

    if (a < b) { // a can not be small and b can not be bigger
      r = b;
      b = a;
      a = r;
      r = 0;
    }

    for (i = 1; b != 0; i++) { // while r!=0 vs b!=0 ?
      r = a % b;
      a = b;
      b = r;
    }
    GCD = a; // i made a serious mistake here !!!!!
    LCM = (a * b) / GCD;
  }

  printf("Booyeah ! GoSaGu= %d & LoSaGu= %d", GCD, LCM);
  return 0;
}
