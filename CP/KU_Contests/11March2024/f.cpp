#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
typedef signed long long int ulli;
using namespace std;

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

  cin >> t;
  while (t--) {
    char str[101];
    cin >> str;
    int len = strlen(str);
    if (len <= 10) {
      cout << str << endl;
    } else {
      // len -= 2;
      cout << str[0] << len - 2 << str[len - 1] << endl;
    }
  }

  // end
} // done