#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str[100] = {0};
  cin >> str;
  int len = strlen(str), iamuselessbutnotuseless = 0;
  for (int i = 0; i <= len - 7; i++) { // note: < vs <= // Careful
    if ((str[i] == '1' && str[i + 1] == '1' && str[i + 2] == '1' &&
         str[i + 3] == '1' && str[i + 4] == '1' && str[i + 5] == '1' &&
         str[i + 6] == '1') ||
        (str[i] == '0' && str[i + 1] == '0' && str[i + 2] == '0' &&
         str[i + 3] == '0' && str[i + 4] == '0' && str[i + 5] == '0' &&
         str[i + 6] == '0')) {
      iamuselessbutnotuseless = 1; // yes
      // break;
    }
  }
  if (iamuselessbutnotuseless == 1) {
    cout << "YES";
  } else {
    cout << "NO";
  }
} // done