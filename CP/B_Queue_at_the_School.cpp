#include <any>
#include <iostream>
using namespace std;
int main(void) {
  int n = 0, t = 0;
  char str[100] = {0};
  cin >> n >> t;
  cin >> str;

  for (int i = 0; i < t; i++) {
    if ((str[i] == 'B' && str[i + 1] == 'G') ||
        (str[i] == 'G' && str[i + 1] == 'B')) {
      swap(str[i], str[i + 1]);
    }
  }

  cout << str;
} // INCOMPLETE