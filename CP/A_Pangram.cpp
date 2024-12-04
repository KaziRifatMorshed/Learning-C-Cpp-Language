#include <cctype>
#include <iostream>
using namespace std;
int main(void) {
  char str[102] = {0}; // CAREFUL
  int cnt[128] = {0};  // CATEFUL
  int n = 0, ascii = 0;
  cin >> n;
  cin >> str;

  for (int i = 0; i <= n; i++) {
    str[i] = tolower(str[i]);
    ascii = toascii(str[i]);
    cnt[ascii]++;
  }

  for (int i = 97; i <= 122; i++) {
    // cout << cnt[i] << " ";
    if (cnt[i] == 0) {
      n = 0;
      break;
    }
  }

  if (n != 0) {
    cout << "YES";
  } else {
    cout << "NO";
  }
} // DONE