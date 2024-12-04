// 230220
#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0
#define out cout <<

ulli gcd(ulli a, ulli b) { return b == 0 ? a : gcd(b, a % b); }
ulli lcm(ulli a, ulli b) { return (a / gcd(a, b)) * b; }

int main(void) {

  ulli y, w;
  get y nget w;
  ulli max = (y > w) ? y : w, remaining = 6 - max + 1;

  out remaining / gcd(remaining, 6) << "/" << (6 / gcd(remaining, 6));

  // the end
} // DONE