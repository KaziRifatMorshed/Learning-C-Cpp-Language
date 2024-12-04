/*
Problem 9:
Write a recursive function that finds the gcd of two non-negative integers.
Input:
25 8895
Output:
25
*/ // b ; b a b ; a
#include <stdio.h>
int GCD(int a, int b) { return b ? GCD(b, a % b) : a; }
// b - b a b - a
int main(void) {
  int a = 0, b = 0;
  scanf("%d %d", &a, &b);
  printf("GCD = %d ", GCD(a, b));
} // done