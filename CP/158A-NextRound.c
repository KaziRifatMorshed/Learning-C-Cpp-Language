#include "stdio.h"
#include <stdlib.h>

int main() {
  int n = 0, k = 0, a[100], count = 0, i;
  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }
  for (i = 0; i < n; i++) {
    if (a[i] >= a[k] && a[i] != 0) {
      count++;
    }
  }
  printf("%d", count);
}
// incomplete
