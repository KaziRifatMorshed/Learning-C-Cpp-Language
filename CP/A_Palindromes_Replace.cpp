#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  char str[102];
  cin >> str;
  int len = strlen(str);
  for (int i = 0; i < len; i++) {
    if (str[i] == '?') {
      str[i] = str[len - i - 1];
    }
  }
  cout << str;
}