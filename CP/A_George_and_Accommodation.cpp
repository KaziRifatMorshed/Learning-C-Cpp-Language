#include "iostream"
using namespace std;
int main(void) { // easy
  int t = 0, count = 0, p = 0, q = 0;
  cin >> t;
  while (t--) {
    cin >> p >> q;
    if ((q - p) >= 2) {
      count++;
    }
  }
  cout << count;
} // DONE