#include "stdio.h"
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
//
int CheckPrime(int partD) { // Check, I AM PRIME (Lair Tester)
  // dhore nibo je prime, condition satisfy na korle non-prime
  int j;
  for (j = 2; j < partD; j++) {
    if (partD % j == 0) {
      return false;
    }
  }
  return true; // I made mistake there
}

int main(void) {
  char input[501], partS[4];
  int i, len = 0, partD = 0;
  printf("\ninput a string = ");
  gets(input);
  len = strlen(input);

  for (i = 0; i < len - 2; i++) {
    partS[0] = input[i];
    partS[1] = input[i + 1];
    partS[2] = input[i + 2];
    partS[3] = '\0';
    partD = (int)atoi(partS);

    if (CheckPrime(partD) == true) { // 1 for prime
      printf("%d is prime\n", partD);
    } else { // 0 for not prime
      printf("%d is NOT prime\n", partD);
    }
  }
  // Thanks to SEAM
}