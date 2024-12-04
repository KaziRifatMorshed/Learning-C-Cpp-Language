#include <iostream>
using namespace std;
int main(void) {
  int t = 0, x[100], y[100], z[100], a = 0, b = 0, c = 0;
  cin >> t;
  for (int i = 0; i < t; i++) {
    cin >> x[i] >> y[i] >> z[i];
    a += x[i];
    b += y[i];
    c += z[i];
  }
  if (a == 0 && b == 0 && c == 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
} // done