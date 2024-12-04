#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  int abcd[5];
  int t = 0;
  cin >> t;

  while (t--) {
    int count = 0;
    for (int i = 1; i <= 4; i++) {
      cin >> abcd[i];
    }
    for (int i = 2; i <= 4; i++) {
      if (abcd[i] > abcd[1]) {
        count++;
      }
    }

    cout << count << endl;
  }
} // done
