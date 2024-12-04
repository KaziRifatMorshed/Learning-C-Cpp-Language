#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *b;
  *b = *a;
  *a = temp;
}

void SelectionSort(int *arr, int len) {
  for (int i = 0; i < len - 1; i++) { // point one element
    int min = arr[i];
    int min_tracker = i;                // i + 1 WAS ERROR
    for (int j = i + 1; j < len; j++) { // searching loop
      if (min > arr[j]) {
        min_tracker = j;
        min = arr[j]; // this line was missing
      }
    }
    swap(&arr[i], &arr[min_tracker]); // swap i pointed element and min_tracker
  }
}

int main(void) {
  int arr[20] = {12,  34, 51, -16, 1,   -3, 7,  87, 56, 3,
                 125, 54, 62, 5,   315, 0,  44, 32, 6,  -12};
  // int n = 0;
  int len = sizeof(arr) / sizeof(arr[0]);
  SelectionSort(&arr, len);
  for (int i = 0; i < 20; i++) {
    printf("%d ", arr[i]);
  }
} // done