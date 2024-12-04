#include <algorithm>
#include <iostream>
using namespace std;

int main(void) {
  int arr[102];
  int n = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  sort(&arr[0], &arr[n]);
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ' ';
  }
} // done