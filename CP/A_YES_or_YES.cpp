#include <iostream>
using namespace std;
int main(void) {
  int t = 0;
  char str[4] = {0};
  cin >> t;
  while (t--) {
    cin >> str;
    if ((str[0] == 'y' || str[0] == 'Y') && (str[1] == 'e' || str[1] == 'E') &&
        (str[2] == 's' || str[2] == 'S')) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }
} // done