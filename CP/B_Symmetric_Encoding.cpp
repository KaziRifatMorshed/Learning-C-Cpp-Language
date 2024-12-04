// 230220
#include <algorithm>
#include <bits/stdc++.h>
#include <cstring>
#include <string>
#include <utility>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    ulli len = 0;
    get len;
    string str;
    cin >> str;
    sort(str.begin(), str.end(), greater<char>());

    for (int i = 0; i < len / 2; i++) {
      //   char temp = str[i];
      swap(str[i], str[len - 1 - i]);
    }
    // while end

    cout << str << endl;
  }
  // the end
}