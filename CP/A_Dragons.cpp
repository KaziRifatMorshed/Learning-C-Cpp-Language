#include <algorithm>
#include <bits/stdc++.h>
#include <cctype>
#include <cstdlib>
#include <iterator>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <utility>
#include <vector>
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
  int t = 0, s, n, flag = 1;
  std::pair<int, int> dragons[1000]; // NEW
  std::cin >> s >> n;

  for (int i = 0; i < n; i++) {
    int x, y;
    std::cin >> dragons[i].first >> dragons[i].second;
  }

  std::sort(dragons, dragons + n);

  for (int i = 0; i < n; i++) {
    if (s > dragons[i].first) { // hero wins
      s += dragons[i].second;
    } else {
      flag = 0;
      break;
    }
  }
  //}
  if (flag == 1) {
    std ::cout << "YES";
  } else {
    std ::cout << "NO";
  }
  // end
} // done