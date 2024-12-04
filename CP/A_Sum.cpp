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
    int arr[4];
    std::cin >> arr[0] >> arr[1] >> arr[2];
    std::sort(&arr[0], &arr[3]);
    // printf("%d %d %d\n", arr[0], arr[1], arr[2]);
    if (arr[0] + arr[1] == arr[2]) {
      std::cout << "YES" << std::endl;
    } else {
      std::cout << "NO" << std::endl;
    }
  }
  // end
} // done