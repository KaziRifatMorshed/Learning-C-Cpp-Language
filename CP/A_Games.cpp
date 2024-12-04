#include <iostream>
using namespace std;
int main(void) {
  int arr1[31] = {0};
  int arr2[31] = {0};
  int n = 0, count = 0;
  cin >> n;
  // input
  for (int i = 0; i < n; i++) {
    cin >> arr1[i] >> arr2[i];
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      if (arr1[i] == arr2[j]) {
        count++;
      }
    }
  }

  cout << count;
} // done