#include <stdio.h>
int main(void) {
  int sum = 0;
  int k, n, w;
  scanf("%d %d %d", &k, &n, &w);
  for (int i = 1; i <= w; i++) {
    sum += i * k;
  }
  if (sum <= n) {
    printf("0");
  } else {
    printf("%d", sum - n);
  }
}