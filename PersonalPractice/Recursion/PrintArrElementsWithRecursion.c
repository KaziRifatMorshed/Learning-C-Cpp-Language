#include <stdio.h>

int _print_arr(int *arr, int init) {
  if (init > 4) {
    return 0; // return zero is safe here
  } else {
    printf("%d ", *(arr + init));
  }
  _print_arr(arr, init + 1);
}

int main(void) {
  int arr[5] = {2, 4, 6, 8, 9};

  printf("Arr Elements are : ");

  _print_arr(arr, 0);
} // done