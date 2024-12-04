#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
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
  int m, n, result;
  std::cin >> m >> n;

  if (m > n) {
    result = m - n;
  } else if ((m * 2) > n) {
    result = m - ceil(double(n) / 2);
    result *= 2;
  } else {
    result =
  }

  std::cout << result;
}