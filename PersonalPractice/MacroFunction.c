#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0
#define sq(n) ((n) * (n))
#define fmod(a, b) ((a) % (b))

int main(void) {
  long i;
  scanf("%lf", &i);
  printf("%lf", sq(i));
  printf("%d", fmod(3, 2)); // WORKS
} // DONE