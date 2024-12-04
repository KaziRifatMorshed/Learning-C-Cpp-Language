/*
Write a recursive program to compute n!
Input:
5
Output:
120
*/
#include <stdio.h>

int factorial(int n, int count) {
  if (n == count) {
    return count; // careful here
  } else {
    return count * factorial(n, count + 1);
  }
}

int main(void) {
  int n = 0;
  scanf("%d", &n);
  printf("%d", factorial(n, 1));
} // done by me !