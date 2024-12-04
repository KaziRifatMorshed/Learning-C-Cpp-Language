#include <algorithm>
#include <bits/stdc++.h>
#include <cstdlib>
#include <iostream>
#include <iterator>
#include <vector>
using namespace std;
#define unsigned long long int ulli

int main(void) {
  vector<long long int> v;
  // vector<int> temp;
  long long int x = 0, n = 0, k = 0, t = 0;
  cin >> t;
  while (t--) {
    long long int x1, x2, y1, y2, result;
    cin >> x1 >> y1 >> x2 >> y2;

    if (x1 == x2) {
      result = abs(y1 - y2);
      cout << result << endl;
    } else if (y1 == y2) {
      result = abs(x1 - x2);
      cout << result << endl;
    } else {
      result = abs(x1 - x2) + abs(y1 - y2) + 2;
      cout << result << endl;
    }
  }
}