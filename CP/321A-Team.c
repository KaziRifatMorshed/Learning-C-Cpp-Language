#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int count = 0, n = 0, a, b, c;
  a = b = c = 0;
  scanf("%d", &n);

  while (n--) {
    scanf("%d %d %d", &a, &b, &c);
    if ((a && b) || (b && c) || (c && a)) {
      count++;
    }
  }
  printf("%d", count);
  return 0;
}//done