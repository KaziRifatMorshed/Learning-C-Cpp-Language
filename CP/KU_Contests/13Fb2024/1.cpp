#include <algorithm>
#include <bits/stdc++.h>
#include <iterator>
#include <vector>
using namespace std;

int main(void) {
  vector<long long int> v;
  // vector<int> temp;
  long long int x = 0, n = 0, k = 0;
  cin >> n >> k;
  // int x;
  for (int i = 0; i < n; i++) {
    cin >> x;
    v.push_back(x);
  }
  sort(v.begin(), v.end());
  long long int l = v.size();
  if (k == 1) {
    cout << v[0] << endl;
  } else {
    cout << v[l - 1] << endl;
  }
}