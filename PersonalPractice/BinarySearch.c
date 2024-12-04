#include <stdio.h>
#define true 1
#define false 0

int BinarySearch(int arr[], int low_index, int high_index, int n) {
  while (1) {
    int mid_index = (low_index + high_index) / 2; // WORKING WITH INDEX
    if (n == arr[mid_index]) {
      // printf("FOUND");
      return true;
    }
    if (n < arr[mid_index]) {
      high_index = mid_index - 1;
    }
    if (n > arr[mid_index]) {
      low_index = mid_index + 1;
    }
    if (low_index > high_index) { // বুদ্ধি
      // printf("NOT FOUND");
      return false;
    }
  }
}

int main(void) {
  int n = 0;
  int arr[] = {0, 1, 3, 5, 6, 7, 8, 10, 11, 12, 13, 16, 18, 19, 23, 25};
  int element_number = sizeof(arr) / sizeof(arr[0]);
  int low_index = 0, high_index = element_number - 1;
  scanf("%d", &n);
  while (1) {
    int mid_index = (low_index + high_index) / 2; // WORKING WITH INDEX
    if (n == arr[mid_index]) {
      printf("FOUND");
      break;
    }
    if (n < arr[mid_index]) {
      high_index = mid_index - 1;
    }
    if (n > arr[mid_index]) {
      low_index = mid_index + 1;
    }
    if (low_index > high_index) { // বুদ্ধি
      printf("NOT FOUND");
      break;
    }
  }

} // WORKING