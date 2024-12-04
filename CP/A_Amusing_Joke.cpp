#include <cctype>
#include <codecvt>
#include <cstring>
#include <iostream>
#include <iterator>
using namespace std;
int main(void) {
  char str1[100] = {0};
  char str2[100] = {0};
  char str3[100] = {0};
  int arr12[128] = {0};
  int arr3[128] = {0};
  int temp = 0;
  cin >> str1;
  cin >> str2;
  cin >> str3;

  for (int i = 0; str1[i] != '\0'; i++) {
    temp = toascii(str1[i]);
    arr12[temp]++;
  }
  for (int i = 0; str2[i] != '\0'; i++) {
    temp = toascii(str2[i]);
    arr12[temp]++;
  }

  for (int i = 0; str3[i] != '\0'; i++) {
    temp = toascii(str3[i]);
    arr3[temp]++;
  }

  for (int i = 65; i <= 90; i++) {
    if (arr12[i] != arr3[i]) {
      temp = 0;
      break;
    }
  }

  if (temp == 0) {
    cout << "NO";
  } else {
    cout << "YES";
  }
} // done