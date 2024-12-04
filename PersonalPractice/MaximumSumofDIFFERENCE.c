#include <stdio.h>
#include <stdlib.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {
  int arr[] = {2, 3, 9, -1, -2, 0};
  int len = sizeof(arr) / sizeof(int);
  int num_of_pair = len / 2;

  // now sort array
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] > arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }

  int _sum = 0;
  for (int i = 0; i < num_of_pair; i++) {
    _sum += abs(arr[i] - arr[len - i - 1]);
  }

  printf("\nsum = %d\nAfter Sort: ", _sum);
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
  // end
} // done