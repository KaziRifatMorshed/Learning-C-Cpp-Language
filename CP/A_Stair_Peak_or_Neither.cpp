// 230220
#include <bits/stdc++.h>
typedef signed long long int ulli;
using namespace std;

#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    ulli a, b, c;
    cin >> a >> b >> c;
    if (a < b && b < c) {
      cout << "STAIR" << endl;
    } else if (a < b && b > c) {
      cout << "PEAK" << endl;
    } else {
      cout << "NONE" << endl;
    }
    // while end
  }
  // the end
} // DONE