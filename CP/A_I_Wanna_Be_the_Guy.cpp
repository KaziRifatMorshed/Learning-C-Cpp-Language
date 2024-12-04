#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
using namespace std;
int main(void) {
  int arr[102] = {0};
  int n = 0, p = 0, q = 0;
  bool final = true;
  cin >> n;

  cin >> p;
  for (int i = 1; i <= p; i++) {
    int temp = 0;
    cin >> temp;
    arr[temp] = 1;
  }
  cin >> q;
  for (int i = 1; i <= q; i++) {
    int temp = 0;
    cin >> temp;
    arr[temp] = 1;
  }

  for (int i = 1; i <= n; i++) {
    if (arr[i] == 0) {
      final = false;
      break;
    }
  }

  if (final == true) {
    cout << "I become the guy.";
  } else {
    cout << "Oh, my keyboard!";
  }
} // done