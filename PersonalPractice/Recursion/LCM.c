/*Problem 10:
Write a recursive solution to compute lcm of two integers. You must not use the
formula lcm(a,b) = (a x b) / gcd(a,b); find lcm from scratch... Input: 23 488
Output:
11224
*/
#include <stdio.h>
int LCM(int i, int a, int b) {
  if ((a * i) % b == 0) {
    return a * i;
  }
  return LCM(i + 1, a, b);
  // return LCM(i + 1, a, b); BOTH WORKS
}

int __GCD__(int a, int b) { return b == 0 ? a : __GCD__(a, a % b); }

int _LCM_(int a, int b) { return (a / __GCD__(a, b)) * b; }

int main(void) {
  unsigned int a = 0, b = 0;
  scanf("%u %u", &a, &b);
  printf("\nLCM = %u", LCM(1, a, b));
} // done