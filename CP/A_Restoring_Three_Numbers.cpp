// 230220
#include <algorithm>
#include <bits/stdc++.h>
#include <cstdio>
#include <vector>
typedef signed long long int ulli;
using namespace std;

#define true 1
#define false 0

int main(void) {

  vector<int> arr(4);
  cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
  sort(arr.begin(), arr.end());

  printf("%d %d %d", arr[3] - arr[0], arr[3] - arr[1], arr[3] - arr[2]);

  // the end
}