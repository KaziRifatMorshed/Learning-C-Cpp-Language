#include <algorithm>
#include <functional>
#include <iostream>
using namespace std;
int main(void) {
  long long int n = 0, k = 0, sum = 0;
  long long int arr[1003];
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  sort(arr, arr + n, greater<long long int>());

  // for (int i = 0; i < n; i++) {
  //   cout << arr[i] << " ";
  // }

  for (int i = 0; i < k; i++) {
    if (arr[i] > 0) {
      sum += arr[i];
    }
  }
  cout << sum;
} // sadly 4th test case :( ; need to add if (arr[i] > 0) condition but
  // was not mentioned in question
  // DONE