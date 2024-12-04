#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int arr[] = {6, 3, 7, 3, 7, 2, 5, 8, 2, 8, 0, 12, 4, 16, 1};
  int len = sizeof(arr) / sizeof(int);
  int max = 0;
  for (int i = 0; i < len; i++) {
    if (arr[i] > max) {
      max = arr[i];
    }
  }
  // int freq[4] = {0};
  int *frequency = (int *)malloc(max * sizeof(int) + 1);
  for (int i = 0; i < len; i++) {
    frequency[arr[i]]++;
    // frequency[6]++;
  }
  for (int i = 0; i < max + 1; i++) {
    for (int j = 0; j < frequency[i]; j++) {
      printf("%d ", i);
    }
  }
}