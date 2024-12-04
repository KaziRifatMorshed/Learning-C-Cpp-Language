#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <cstdlib>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

#define nl printf("\n")
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d", &n, &m)

// #define pf(n) printf("%lld", n)
#define pf(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

int sieve[2001];

int main(void) {
  for (int i = 1, series = 1; series <= 2000; series++) {
    if ((series % 10 == 3) || (series % 3 == 0)) { // logic e vul kortasi
      continue;
    }
    sieve[i] = series;
    i++;
  }
  // for (int i = 0; i <= 2000; i++) {
  //   pf(sieve[i]);
  //   putchar(' ');
  // }
  int t = 0;
  std ::cin >> t;
  while (t--) {
    int k;
    std ::cin >> k;
    std::cout << sieve[k] << std::endl;
  }
  // end
} // done