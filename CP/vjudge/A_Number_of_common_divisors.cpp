// 230220
/*
You will be given T (T<=10^6) pair of numbers. All you have to tell is the
number of common divisors between two numbers in each pair.

Input
First line of input: T (Number of test cases)
In next T lines, each have one pair A B (0 < A, B <= 10^6)

Output
One integer describing number of common divisors between two numbers.
*/

#include <bits/stdc++.h>
#include <cmath>
typedef unsigned int ulli;
using namespace std;

ulli gcd(ulli a, ulli b) { return b ? gcd(b, a % b) : a; }

#define true 1
#define false 0

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    ulli a, b, p, count = 0;
    cin >> a >> b;
    p = gcd(a, b);
    for (ulli i = 1; i * i <= p; i++) {
      if (p % i == 0) {
        if (i * i == p) {
          count++;
        } else {
          count += 2;
        }
      }
    }
    cout << count << endl;
    // while end
  }
  // the end
}