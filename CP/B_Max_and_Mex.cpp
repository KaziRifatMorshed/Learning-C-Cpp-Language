#include <bits/stdc++.h>

using namespace std;

void solve() {
  int n, k, temp, mex = -1, max = INT_MIN;
  set<int> s;

  cin >> n >> k;

  for (int i = 0; i < n; i++) {
    cin >> temp;

    if (mex != -1 && temp != i) {
      mex = i;
    }
    if (i == n - 1) {
      max = temp;
    }

    s.insert(temp);
  }

  int i = 0;
  int ans;
  while (1) {
    if (mex > max) {
      ans = s.size() + k;
      break;
    } else {
      if () {
        // incomplete
      }
    }
  }
}

int main() {
  int t;

  cin >> t;

  while (t--) {
    solve();
  }

  return 0;
}