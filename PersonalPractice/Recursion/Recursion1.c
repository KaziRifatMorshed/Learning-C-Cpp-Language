#include "stdio.h"

void print_recursive(int *arr, int current_index, int max) {
  if (current_index >= max) { // BASE
    return;
  } else {
    printf(" %d ", arr[current_index]);
    print_recursive(arr, (current_index+1), max);
  }
}

int main(void) {
  int arr[100] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
  print_recursive(arr, 0, 9);
} // DONE