#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdlib>
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
  int matrix[5][5];
  int a, b;

  for (int i = 0; i < 5; i++) {
    for (int j = 0; j < 5; j++) {
      cin >> matrix[i][j];
      if (matrix[i][j] == 1) {
        a = i, b = j;
      }
    }
  }
  a++, b++;

  cout << abs(3 - a) + abs(3 - b);
  // end
}