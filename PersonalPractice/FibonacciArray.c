#include <stdio.h>

int main() {
  unsigned int n = 0, i;
  printf("last digit of fibonacci\n");
  scanf("%u", &n);
  long long int Array[n];
  Array[0] = 0;
  Array[1] = 1;
  for (i = 2; i <= n; i++) {
    Array[i] = Array[i - 1] + Array[i - 2];
  }

  for (i = 0; i <= n; i++) {
    printf("%lli ", Array[i]);
  }

  return 0;
} // done