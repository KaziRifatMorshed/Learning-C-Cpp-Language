#include <cinttypes>
#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define true 1
#define false 0

int main(void) {
  ulli t = 0, num = 0;
  scanf("%lld", &t);
  while (t--) {
    scanf("%lld", &num);
    ulli a = num / 2020;
    ulli b = num % 2020;
    if (a >= b) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  // EOF
} // DONE