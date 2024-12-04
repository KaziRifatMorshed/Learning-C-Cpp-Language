#include <cstring>
#include <iostream>
#include <stdexcept>
using namespace std;

int main(void) {
  char src[] = "YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
  int t = 0;
  cin >> t;
  while (t--) {
    char str[52];
    cin >> str;
    if (strstr(src, str)) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }
}

// complete
/* MANUAL TRASH !
  int t = 0;
  cin >> t;
  while (t--) {
    char str[52];
    cin >> str;
    bool temp = false;
    int len = strlen(str);
    for (int i = 0; i < len - 1; i++) {
      if ((str[i] == 'Y' && str[i + 1] == 'e') ||
          (str[i] == 'e' && str[i + 1] == 's') ||
          (str[i] == 's' && str[i + 1] == 'Y')) {
        temp = true;
      } else {
        temp = false;
        break;
      }
    }
    if (temp == true) {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  }*/