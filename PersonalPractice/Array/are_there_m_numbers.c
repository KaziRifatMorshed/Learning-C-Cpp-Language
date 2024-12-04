#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int n = 0, m = 0, count = 0, temp_count = 0;
  scanf("%d %d", &n, &m);
  int *arr = (int *)malloc(n * sizeof(int));

  // data entry
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  // search
  for (int left = 0; left < n; left++) {
    for (int i = left, temp_count = 0; i < n; i++) {
      if (arr[left] == arr[i]) {
        temp_count++;
        if (temp_count >= m) {
          count++;
          break;
        }
      }
    }
  }

  printf("%d", count);
  // end
} // done