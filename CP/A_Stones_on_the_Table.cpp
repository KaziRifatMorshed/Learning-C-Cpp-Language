#include <iostream>
#include <stdlib.h>
#include <string.h>
using namespace std;

int main(void) {
  char str[100];
  int count = 0, len = 0;
  cin >> len;
  cin >> str;

  for (int i = 0; i < len; i++) {
    if (str[i] == str[i + 1]) {
      count++;
    }
  }
  cout << count;
}// done