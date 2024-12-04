/*
## 12. Assume that you have an array of 20 positive integers. Write a program to
recursively determine the summation of all prime integers in the array. The
array will be taken as input from file.

*/

#include <stdio.h>

#define true 1
#define false 0

int isPrime(int num, int j) { // j == 3
  if (num <= 1) {
    return false;
  }
  if (num % 2 == 0) {
    return false;
  }

  if (num % j == 0) {
    return false;
  }
  if (j * j <= num) {
    isPrime(num, j + 2);
  }
  return true;
}

int want_sum(int *arr, int i) {
  if (i == 20) {
    return 0;
  }
  if (isPrime(arr[i], 3) == true) {
    return arr[i] + want_sum(arr, i + 1);
  } else {
    return want_sum(arr, i + 1);
  }
}

int main(void) {

  freopen("12.txt", "r", stdin);
  int arr[20];
  for (int i = 0; i < 20; i++) {
    scanf("%d", &arr[i]);
  }
  printf("%d ", want_sum(arr, 0));

} // HALF done
