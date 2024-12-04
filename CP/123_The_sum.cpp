// 230220
#include <bits/stdc++.h>
typedef signed long long int ulli;
using namespace std;

ulli arr[45] = {0, 1, 1, 2};

#define true 1
#define false 0

int main(void) {
  for (ulli i = 4; i < 42; i++) {
    arr[i] = arr[i - 1] + arr[i - 2];
  }
  ulli n, sum = 0;
  std::cin >> n;
  for (ulli i = 1; i <= n; i++) {
    sum += arr[i];
  }
  cout << sum;
  // the end
} // done