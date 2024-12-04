#include "iostream"
using namespace std;
int main(void) {
  int n = 0, k = 0, count = 0;
  int arr[102];
  cin >> n >> k;
  for (int i = 1; i <= n; i++) { // i != 0 CAREFUL
    cin >> arr[i];
  }

  for (int i = 1; i <= n; i++) { // i != 0 CAREFUL
    if (arr[i] >= arr[k] && arr[i] > 0) {
      count++;
    }
  }

  cout << count;
} // done
