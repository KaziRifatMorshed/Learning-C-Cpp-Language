// 230220
#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  int arr[101] = {0};
  int t = 0, even_count = 0, odd_count = 0, position = 0;
  std::cin >> t;
  for (int i = 1; i <= t; i++) {
    int temp;
    get temp;
    arr[i] = temp;
    if (temp % 2 == 0) {
      even_count++;
    } else {
      odd_count++;
    }
  }
  if (even_count > odd_count) {
    // search odd
    for (int i = 1; i <= t; i++) {
      if (arr[i] % 2 != 0) {
        position = i;
        break;
      }
    }
  } else {
    // search even
    for (int i = 1; i <= t; i++) {
      if (arr[i] % 2 == 0) {
        position = i;
        break;
      }
    }
  }
  cout << position;
  // the end
} // DONE