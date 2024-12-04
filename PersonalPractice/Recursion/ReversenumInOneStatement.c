#include <stdio.h>
int main(void) {
  int n = 37;
  n = (n % 10) * 10 + (n - (n % 10)) / 10;
  printf("%d\n", n);
  int m = 234;
  m = (m % 10) * 100 + ((m / 10) % 10) * 10 + (m / 100);
  printf("%d", m);
} // WORKING