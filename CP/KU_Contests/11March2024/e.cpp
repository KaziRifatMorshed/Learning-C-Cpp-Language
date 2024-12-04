#include <bits/stdc++.h>
#include <cctype>
#include <cmath>
#include <cstdlib>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
typedef signed long long int ulli;
using namespace std;

#define nl printf("\n")
#define sf(n) scanf("%d", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d%I64d", &n, &m)

#define pf(n) printf("%lld", n)
// #define pf(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

/*
Ashishgup and FastestFinger play a game.

They start with a number n
 and play in turns. In each turn, a player can make any one of the following
moves:

Divide n
 by any of its odd divisors greater than 1
.
Subtract 1
 from n
 if n
 is greater than 1
.
Divisors of a number include the number itself.

The player who is unable to make a move loses the game.

Ashishgup moves first. Determine the winner of the game if both of them play
optimally.

Input
The first line contains a single integer t
 (1≤t≤100
)  — the number of test cases. The description of the test cases follows.

The only line of each test case contains a single integer  — n
 (1≤n≤109
).

Output
For each test case, print "Ashishgup" if he wins, and "FastestFinger" otherwise
(without quotes).
*/

int main(void) {
  int t = 0, n;
  char s1[] = "Ashishgup";
  char s2[] = "FastestFinger";
  cin >> t;
  int cnt = 0;

  while (t--) {
    cnt = 0;
    cin >> n;
    if (n == 1 || n == 2) {
      cout << s2 << endl;
    } else if (n % 2 != 0)
      cout << s1 << endl;
    else {
      if ()
    }
  }
}
}
}