// 230220
#include <bits/stdc++.h>
typedef signed long long int ulli;
using namespace std;

#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int len = 0;
    cin >> len;
    char s[1000002];
    cin >> s;
    int count = 0, checker = len - 2;
    for (int i = 0; i < checker; i++) {
      if ((s[i] == 'm' && s[i + 1] == 'a' && s[i + 2] == 'p') ||
          (s[i] == 'p' && s[i + 1] == 'i' && s[i + 2] == 'e')) {
        count++, i += 2;
      }
    }
    cout << count << endl;
    // while end
  }
  // the end
} // done

// mapiexn nide edge case