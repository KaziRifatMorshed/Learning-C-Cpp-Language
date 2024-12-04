#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define nl printf("\n")
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d", &n, &m)

#define pf(n) printf("%lld", n)
// #define pf(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

int main(void) {
  ulli t = 0, n = 0, sum = 0;
  scanf("%lld", &t);
  while (t--) {
    scanf("%lld", &n);
    if (n < 10) {
      sum = n;
      printf("%lld\n", sum);
    } else {
      ulli tester = 11;
      sum = 9;
      for (tester = 11; tester <= n; tester = tester * 10 + 1) {
        sum = +(sum + (ulli)(n / tester));
      }

      printf("%lld\n", sum);
    }
  }

  // EOF
} // INCOMPLETE