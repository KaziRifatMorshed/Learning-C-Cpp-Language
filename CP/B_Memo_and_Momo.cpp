#include <codecvt>
#include <cstdio>
#include <iostream>
using namespace std;
int main(void) {
  unsigned long long int a = 0, b = 0, k = 0;
  cin >> a >> b >> k;
  if (a % k == 0 && b % k == 0) {
    cout << "Both";
  } else if (a % k == 0 && b % k != 0) {
    cout << "Memo";
  } else if (a % k != 0 && b % k == 0) {
    cout << "Memo";
  } else {
    cout << "No One";
  }
}