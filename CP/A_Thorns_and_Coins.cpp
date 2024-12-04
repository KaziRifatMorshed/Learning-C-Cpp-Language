#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t = 0, len = 0;
  char arr[55];
  arr[0] = ' ';
  cin >> t;
  while (t--) {
    cin >> len;
    cin >> arr;
    int count = 0;
    for (int i = 0; i < len; i++) {
      if (arr[i] == '*' && arr[i + 1] == '*') {
        break;
      }
      if (arr[i] == '@') {
        count++;
      }
    }
    cout << count << endl;
  }

  // end
}