#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
  int t = 0;
  int arr[103] = {0};
  cin >> t;
  while (t--) {
    int len = 0, result = 0;
    cin >> len;
    for (int i = 0; i < len; i++) { // input arr
      cin >> arr[i];
    }

    if (arr[0] != arr[1] && arr[0] != arr[2]) {
      result = 0;
      // break;
    } else {
      for (int j = 1; j < len; j++) {
        if (arr[0] != arr[j]) {
          result = j;
          break;
        }
      }
    }

    cout << result + 1 << endl;
  }
} // DONE