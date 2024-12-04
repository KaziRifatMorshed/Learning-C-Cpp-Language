// #include <algorithm>
#include <bits/stdc++.h>
// #include <vector>
using namespace std;
// #define int long long

void solve() {
  int n, i, cnt = 0;
  cin >> n;
  vector<int> v(n);
  for (auto &i : v)
    cin >> i;
  for (i = n - 1; i > 0; i--) {
    if (v[i] > v[i - 1])
      break;
  }
  i++;
  // cout << i << endl;
  // return;
  n = i;
  // cout << n << endl;
  // return;
  for (i = 1; i < n; i++) {
    if (v[i - 1] > v[i])
      cnt = i;
  }
  cout << cnt << endl;
}

signed main() {
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
