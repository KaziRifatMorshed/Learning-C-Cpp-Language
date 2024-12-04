#include <stdio.h>
int main(void) {
  int arr[10] = {2, 6, 34, 2, 6, 61, 6, 3, 16, 28};
  int max = 0, second_max = 0;
  // max > sec_max > other
  for (int i = 0; i < 10; i++) {
    if (arr[i] > max && arr[i] > second_max) {
      max = arr[i];
    } else if (arr[i] < max && arr[i] > second_max) {
      second_max = arr[i];
    } else {
      continue;
    }
  }
  printf("max = %d, sec max = %d", max, second_max);
} // working