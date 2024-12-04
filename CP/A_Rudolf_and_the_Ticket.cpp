// 230220
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
typedef signed long long int ulli;
using namespace std;

#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n = 0, m = 0, k = 0;
    cin >> n >> m >> k;

    vector<int> nn, mm;
    for (int i = 0; i < n; i++) {
      int temp = 0;
      cin >> temp;
      nn.push_back(temp);
    }
    for (int i = 0; i < m; i++) {
      int temp = 0;
      cin >> temp;
      mm.push_back(temp);
    }
    sort(nn.begin(), nn.end());
    sort(mm.begin(), mm.end());
    int count = 0;

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < m; j++) {
        if (nn[i] + mm[j] <= k) {
          count++;
        }
      }
    }

    // cout << n_count << " " << m_count << " " << n_count * m_count << endl;
    cout << count << endl;
    // while end
  }
  // the end
} // done