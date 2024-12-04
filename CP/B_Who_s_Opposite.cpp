#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define nl printf("\n")
#define sf(n) scanf("%llu", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d %I64d", &n, &m)

#define pfulli(n) printf("%lld", n)
#define pf(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

int main(void) {
  ulli t = 0, a, b, c;
  sf(t);
  while (t--) {
    scanf("%llu %llu %llu", &a, &b, &c);
    if (a + b < c || (a + b) % 2 != 0) {
      pf(-1);
    }
  }

  // eof
} // INCOMPLETE