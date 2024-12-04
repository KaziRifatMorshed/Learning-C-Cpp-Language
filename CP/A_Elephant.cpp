#include <iostream>
using namespace std;

int function(int a) {
  if (a % 5 != 0) {
    return 1;
  }
  return 0;
}

int main(void) {
  int a = 0;
  cin >> a;
  cout << ((a / 5) + function(a));
} // done