#include <iostream>
using namespace std;

int main(void) {
  unsigned int w = 0, k = 0, n = 0;
  cin >> k >> n >> w;
  cout << ((((w * (w - 1)) / 2) * k) - n);
} // incomplete