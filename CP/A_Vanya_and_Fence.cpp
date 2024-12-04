#include <iostream>
using namespace std;
int main(void) {
  int n = 0, h = 0, result = 0;
  int arr[1001];
  cin >> n >> h;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
    if (arr[i] > h) {
      result += 2;
    } else {
      result++;
    }
  }
  cout << result;
} // done