#include <stdio.h>

int REV(int n, int rev) {
  if (n == 0) {
    return rev; // not return 0;
  }
  rev = (rev * 10) + (n % 10);
  return REV(n / 10, rev); // RETUEN UPDATED FUNCTION
  // return rev; // I AM MANING THIS MISTAKE AGAIN AND AGAIN
}
int main(void) {
  int num = 1234;
  printf("main = %d \tREV = %d", num, REV(num, 0));
} // DONE