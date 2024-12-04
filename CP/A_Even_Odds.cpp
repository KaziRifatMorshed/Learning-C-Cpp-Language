#include "iostream"
#include <cmath>
using namespace std;
int main(void) {
  // unsigned long long int number = 0;
  unsigned long long int n = 0, k = 0;
  cin >> n >> k;

  if (n % 2 == 0) { // even
    n /= 2;
  } else { // odd
    n = (n / 2) + 1;
  }

  if (n > k) {
    cout << ((k - n) * 2);
  } else {
    cout << ((2 * k) - 1);
  }
}