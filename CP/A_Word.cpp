#include <cctype>
#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str[100] = {0};
  cin >> str;
  int countupper = 0, countlower = 0, len = strlen(str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] >= 'A' && str[i] <= 'Z') {
      countupper++;
    } else if (str[i] >= 'a' && str[i] <= 'z') {
      countlower++;
    }
  }

  if (countupper > countlower) {
    for (int i = 0; str[i] != '\0'; i++) {
      str[i] = toupper(str[i]);
    }
  } else {
    for (int i = 0; str[i] != '\0'; i++) {
      str[i] = tolower(str[i]);
    }
  }
  cout << str;
} // done