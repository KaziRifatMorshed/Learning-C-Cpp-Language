#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
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
  int t = 0, flag = false, cnt11 = 0;
  cin >> t;
  vector<int> v;
  int arr[10000];
  for (int i = 0; i < t; i++) {
    int temp;
    cin >> temp;
    v.push_back(temp);
  }

  sort(v.rbegin(), v.rend());

  for (int i = 0; i < t; i++) {
    if (v[0] != v[i]) {
      flag = true;
      break;
    }
  }

  while (flag == true) {
    cnt11 = 0;
    sort(v.rbegin(), v.rend());
    if (v[0] != v[1]) {
      v[0] -= v[1];
    }
    for (int i = 0; i < t; i++) {
      if (v[0] == v[i]) {
        cnt11++;
      }
    }
    if (cnt11 == t) {
      break;
    }
  }
  int sum = 0;
  for (int i = 0; i < t; i++) {
    sum += v[i];
  }
  cout << sum;
}
