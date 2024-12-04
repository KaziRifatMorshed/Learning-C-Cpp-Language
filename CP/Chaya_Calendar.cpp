#include <cctype>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define nl printf("\n")
#define sf_d(n) scanf("%d", &n)
#define sf_llu(n) scanf("%llu", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d", &n, &m)

#define pf_llu(n) printf("%llu", n)
#define pf_d(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

int main(void) {
  int t = 0, num_of_signs = 0;
  ulli a[100];
  sf_d(t);
  while (t--) {
    sf_d(num_of_signs);
    for (int i = 0; i < num_of_signs; i++) {
      sf_llu(a[i]);
    }
    // loop end
  }
  // end
} // incomplete