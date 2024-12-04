#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
#define unsigned long long int ulli

int checker(int a, int b, int c) {
  if (a < b + c && b < c + a && c < a + b) {
    return 1;
  }
  return 0;
}

int main(void) {
  vector<int> v;
  int x = 0, n = 0, count = 0, t = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int t = 0;
    cin >> t;
    v.push_back(t);
  }
  int len = size(v);
  sort(v.begin(), v.end());
  for (int i = 0; i < n - 2; i++) {
    for (int j = i + 1; j < n - 1; j++) {
      for (int k = j + 1; k < n; k++) {
        int gor = v[i] + v[j] + v[k];
        gor /= 3;
        if (v[i] < gor &&) {
        }
        count += checker(v[i], v[j], v[k]);
      }
    }
  }
  cout << count;
  // eof
}