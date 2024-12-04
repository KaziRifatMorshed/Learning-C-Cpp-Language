#include <bits/stdc++.h>

using namespace std;
// Thanks for SEAM's help
int main(void) {
  int one = 0, two = 0, three = 0, cnt, i;
  char c;
  string s;

  while (cin >> c && c != '\0') { // nice idea
    if (c == '1') {
      one++;
    }
    if (c == '2')
      two++;
    if (c == '3')
      three++;
  }

  cnt = one + two + three;

  for (i = 0; i < one; i++) {
    s += "1+";
  }
  for (i; i < one + two; i++) {
    s += "2+";
  }
  for (i; i < cnt; i++) {
    s += "3+";
  }

  s.erase(s.end() - 1);

  cout << s;
}