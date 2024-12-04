#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define true 1
#define false 0

int main(void) {
  ulli n = 0, arr[100000] = {0}, max = -1;
  scanf("%lld", &n);
  for (int i = 1; i <= n; ++i) {
    scanf("%lld", &arr[i]);
  }

  for (int i = 0; i <= (n); i++) {
    if (max < arr[i]) {
      max = arr[i];
    }
  }

  printf("%lld", max);
} // DONE