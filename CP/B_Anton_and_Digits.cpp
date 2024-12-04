#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define true 1
#define false 0

int main(void) {
  ulli sum = 0, two = 0, three = 0, five = 0, six = 0;
  scanf("%lld %lld %lld %lld", &two, &three, &five, &six);
  // printf("%lld %lld %lld %lld\n", two, three, five, six);
  while (two > 0 and six > 0 and five > 0) {
    sum += 256;
    two--, six--, five--;
    // printf("%lld %lld %lld %lld and %lld\n", two, three, five, six, sum);
  }
  while (three > 0 and two > 0) {
    sum += 32;
    three--, two--;
    // printf("%lld %lld %lld %lld and %lld\n", two, three, five, six, sum);
  }
  printf("%lld", sum);
  // EOF
} // DONE