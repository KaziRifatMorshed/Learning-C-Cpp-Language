#include <iostream>
#include <ostream>
#include <tuple>
using namespace std;
int main(void) {
  int t = 0;
  unsigned long a = 0, b = 0;
  cin >> t;
  while (t--) {
    cin >> a >> b;
    if (a % b == 0) {
      cout << a % b << endl;
    } else {
      cout << b - (a % b) << endl; //  main logic (b - (a % b))
    }
  }
} // done