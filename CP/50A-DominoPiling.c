#include "stdio.h"
#include <inttypes.h>
#include <string.h>
int main(void) {
  int m = 0, n = 0, result = 0;
  scanf("%d %d", &m, &n);
  result = (m * n) / 2;
  printf("%d", result);
}