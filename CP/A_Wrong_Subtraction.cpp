#include <iostream>
using namespace std;
int main(void) {
  int num = 0, times = 0;
  cin >> num >> times;
  while (times--) {
    if (num % 10 == 0) {
      num /= 10;
    } else {
      num--;
    }
  }
  cout << num;
} // done