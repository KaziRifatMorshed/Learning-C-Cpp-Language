#include <algorithm>
#include <bits/stdc++.h>
typedef unsigned long long int ulli;

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
  int t = 0;
  std::cin >> t;
  while (t--) {
    ulli a, b, n, m, _min, quantity, remaining, result;
    std::cin >> a >> b >> n >> m;

    quantity = n / (m + 1);
    remaining = n - quantity * (m + 1); // bucco toh
    result =
        quantity * std::min(a * m, b * (m + 1)) + remaining * std::min(a, b);
    //
    std::cout << result << std::endl;
  }
} // done
  // took help from CF Tutorial