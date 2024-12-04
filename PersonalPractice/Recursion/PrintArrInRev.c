/*
You will be given an array of integers, write a recursive solution to print it
in reverse order. Input:
5
69 87 45 21 47
Output:
47 21 45 87 69
*/
#include <stdio.h>
void PrintRevFunc(int *arr, int len, int n) {
  if (n == len) {
    return;
  }
  PrintRevFunc((arr + 1), len, n + 1);
  printf("%d ", *arr);
}

int main(void) {
  int arr[] = {69, 87, 45, 21, 47};
  int len = (sizeof(arr) / sizeof(arr[0]));
  PrintRevFunc(arr, len, 0);
} // done