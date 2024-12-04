#include <stdio.h>
#include <stdlib.h>
int main(void) {
  unsigned long long int n = 0, m = 0, count = 0, power_count = 0;
  scanf("%llu %llu", &n, &m);
  unsigned long long int *arr =
      (unsigned long long int *)malloc(n * sizeof(unsigned long long int));

  // data entry
  for (unsigned long long int i = 0; i < n; i++) {
    scanf("%llu", &arr[i]);
  }

  // search
  for (unsigned long long int left = 0; left < n; left++) {
    for (unsigned long long int i = left, power_count = arr[left]; i < n; i++) {
      // int i = left + 1 AND power_count = 0 HOBE NA
      if (arr[left] == arr[i] && arr[i] > 0) {
        power_count += arr[i];
        arr[i] = 0;
        if (power_count >= m) {
          count++;
          break;
        }
      }
    }
    arr[left] = 0;
  }

  printf("%llu", count);
  // end
} // done