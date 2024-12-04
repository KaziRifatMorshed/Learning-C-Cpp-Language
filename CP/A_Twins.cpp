#include <algorithm>
#include <iostream>
using namespace std;
int main(void) {
  int n = 0, sum = 0;
  cin >> n;
  int arr[102] = {0};
  for (int i = 1; i <= n; i++) {
    cin >> arr[i];
    sum += arr[i];
  }
  sum /= 2;
  sort(&arr[1], &arr[n + 1], greater<int>()); // issue &arr[n+1] // CAREFUL
  int j, temp = 0;
  for (j = 1; 1; j++) {
    temp += arr[j];
    if (temp > (sum)) {
      break;
    }
  }
  cout << j;
}