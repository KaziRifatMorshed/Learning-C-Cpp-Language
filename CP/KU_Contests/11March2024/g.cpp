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
/*
There is a group of n
 people. Some of them might be liars,
who always tell lies. Other people always
tell the truth. The i -th person says
"There are at least li liars amongst us".
Determine if what people are saying
is contradictory, or if it is possible. If
it is possible, output the number of
liars in the group. If there are multiple
possible answers, output any one of them.

Input
The first line contains a single integer t
 (1≤t≤1000) — the number of test cases.

The first line of each test case contains a single integer n
 (1≤n≤100
).

The second line of each test case contains n
 integers li
 (0≤li≤n) — the number said by the i
-th person.

It's guaranteed that the sum of all n
 does not exceed 104
.

Output
For each test case output a single integer.
If what people are saying is
contradictory, output −1 . Otherwise,
 output the number of liars in the group.
If there are multiple possible
answers, output any one of them.
*/

int main(void) {
  int t = 0;
  cin >> t;
  while (t--) {
    int n;
    vector<int> arr;
    cin >> n;
    for (int i = 0; i < n; i++) {
      int temp;
      cin >> temp;
      arr.push_back(temp);
    }
    sort(arr.begin(), arr.end());

    //
  }

  // end
}