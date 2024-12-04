#include <stdio.h>

int arr[] = {0, 1, 2, 3, -4, -3, -2};

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}
// find max

int main(void) {
  // int arr[6] = {5, 3, 8, 5, 2, 6};
  int len = sizeof(arr) / sizeof(int);

  printf("Before Sort: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }

  // algo
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j < len; j++) {
      if (arr[i] < arr[j]) {
        swap(&arr[i], &arr[j]);
      }
    }
  }

  printf("\nAfter Sort: ");
  for (int i = 0; i < len; i++) {
    printf("%d ", arr[i]);
  }
} // DONE