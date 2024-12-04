// 230220
#include <bits/stdc++.h>
typedef signed long long int ulli;
using namespace std;

#define true 1
#define false 0
// ulli sieve_of11[8] = {1, 11, 121, 1331, 14641, 161051, 1771561, 19487171};
ulli sieve_of11[62] = {
    10,     11,     100,    101,    110,    111,    1000,   1001,   1010,
    1011,   1100,   1101,   1110,   1111,   10000,  10001,  10010,  10011,
    10100,  10101,  10110,  10111,  11000,  11001,  11010,  11011,  11100,
    11101,  11110,  11111,  100000, 100001, 100010, 100011, 100100, 100101,
    100110, 100111, 101000, 101001, 101010, 101011, 101100, 101101, 101110,
    101111, 110000, 110001, 110010, 110011, 110100, 110101, 110110, 110111,
    111000, 111001, 111010, 111011, 111100, 111101, 111110, 111111};

ulli solve(ulli num) {
  for (ulli i = 0; i < 62; i++) {
    if (num % sieve_of11[i] == 0) {
      return true;
    }
  }
  return false;
}

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    ulli num, flag = false;
    cin >> num;
    if (solve(num) || num == 1) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    // while end
  }
  // the end
} // INcomplete