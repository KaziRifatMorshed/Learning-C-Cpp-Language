#include <iostream>
using namespace std;

int main(void) {
  int t = 0;
  cin >> t;
  while (t--) {
    char str[6];
    cin >> str;
    int countA = 0, countB = 0;
    for (int i = 0; str[i] != '\0'; i++) {
      if (str[i] == 'A') {
        countA++;
      } else {
        countB++;
      }
    }
    if (countA > countB) {
      cout << "A\n";
    } else {
      cout << "B\n";
    }
  }
} // done