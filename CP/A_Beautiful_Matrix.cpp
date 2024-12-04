#include <bits/stdc++.h>
using namespace std;
#define int long long
signed main() {
  int t;
  cin >> t;
  while (t--) {
    int n, negative_count = 0, sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
      cin >> arr[i];
      if (arr[i] < 0) {
        negative_count++;
        arr[i] = arr[i] * -1;
      }
      sum += arr[i];
    }
    sort(arr, arr + n);
    if (negative_count % 2 != 0)
      cout << sum - arr[0] << endl;
    else
      cout << sum << endl;
  }
}