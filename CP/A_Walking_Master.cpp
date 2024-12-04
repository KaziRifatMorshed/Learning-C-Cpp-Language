#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int slli;

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

struct coordinate {
  slli x, y;
} ini, fin;

int main(void) {
  int t = 0;
  std::cin >> t;
  while (t--) {
    std::cin >> ini.x >> ini.y >> fin.x >> fin.y;
    slli moves = 0, diff = fin.y - ini.y;

    if (fin.y >= ini.y && fin.x <= ini.x + diff) {
      moves = diff + ((ini.x - fin.x) + diff); // hard
    } else {
      moves = -1;
    }

    std::cout << moves << std::endl;
  }
} // done