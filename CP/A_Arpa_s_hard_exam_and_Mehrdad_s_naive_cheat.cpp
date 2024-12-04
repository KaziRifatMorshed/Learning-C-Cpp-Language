#include <cmath>
#include <iostream>
using namespace std;
int main(void) {
  int num = 0;
  cin >> num;
  if (num == 0) {
    cout << 1;
  } else if (num % 4 == 0) { // 4
    cout << 6;
  } else if (num % 4 == 3) { // 3
    cout << 2;
  } else if (num % 4 == 2) { // 2
    cout << 4;
  } else if (num % 4 == 1) { // 1
    cout << 8;
  }
} // done