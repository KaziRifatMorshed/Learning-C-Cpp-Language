// 230220
#include <bits/stdc++.h>
#include <cstdlib>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    char str[7];
    get str;
    int a, b;
    a = str[0] + str[1] + str[2] - 3 * '0';
    b = str[3] + str[4] + str[5] - 3 * '0';
    if (a == b) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    // while end
  }
  // the end
} // DONE