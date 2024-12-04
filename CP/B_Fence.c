// #include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  ulli n = 0, k = 0, min_index = 0, sum = 0;
  scanf("%lld %lld", &n, &k);
  // ulli arr[n];
  ulli *arr = (ulli *)malloc(sizeof(ulli) * n);
  for (int i = 0; i < n; ++i) {
    scanf("%lld", &arr[i]);
  }
  ulli min = arr[0] + arr[1] + arr[2];
  for (int i = 0; i < (n); i++) {
    sum = (arr[i] + arr[i + 1] + arr[i + 2]);
    if (min > sum) {
      min = sum;
      min_index = i;
    }
  }
  free(arr);
  printf("%lld", min_index + 1);
  return 0;
  // EOF
} // INCOMPLETE