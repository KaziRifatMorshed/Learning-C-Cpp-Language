#include <stdio.h>
int main(void) {
  int n = 0;
  scanf("%d", &n);
  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }
  int max = arr[0];
  int min = arr[0];
  int count = 0;
  for (int i = 1; i < n; i++) {
    if (max < arr[i]) {
      max = arr[i];
      count++;
    }
    if (min > arr[i]) {
      min = arr[i];
      count++;
    }
  }
  printf("%d", count);
  // end
} // done