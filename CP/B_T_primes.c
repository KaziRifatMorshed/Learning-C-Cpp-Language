#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int isPrime(ulli n) {
  int prime = true;
  for (ulli i = 2; i < (n / 2) && prime; i++) {
    prime &= n % i > 0; // FORGETTING THIS LINE
  }
  return prime;
}

int main(void) {
  int t = 0;
  // int arr[] = {0};
  scanf("%d", &t);
  getchar();
  while (t--) {
    ulli num = 0;
    scanf("%llu", &num);
    getchar();
    ulli sqrt = (ulli)sqrtl(num);

    if (floor(sqrtl(num) == ceil(sqrtl(num))) && isPrime(sqrtl(num))) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
} // INCOMPELTE