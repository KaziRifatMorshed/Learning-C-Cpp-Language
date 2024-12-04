#include "stdio.h"
#define true 1
#define false 0

int isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  if (num % 2 == 0) {
    return false;
  }
  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int isPrime_r(int num, int j) {
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
    isPrime_r(num, j + 2);
  }
  return true;
}

int main() {
  // long int i = 0, count = 0, n = 0; // works
  // long long int i = 0, count = 0, n = 0; // works
  // unsigned long long int i = 0, count = 0, n = 0; // works
  int i = 0, count = 0, n = 0;
  printf("Prime number tester:");
  scanf("%d", &n);

  for (i = 2; i < n; i++) {
    if (n % i == 0) {
      count++;
      break;
    }
  }

  if (count != 0) {
    printf("it is non-prime number");
  } else {
    printf("it is prime number");
  }
  return 0;
}