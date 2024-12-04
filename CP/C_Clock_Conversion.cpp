// 230220
#include <bits/stdc++.h>
#include <cstdio>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;
using namespace std;

int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int hour, min;
    char s[6];
    char am[3] = "AM", pm[3] = "PM";
    cin >> s;
    char s2[3];
    s2[0] = s[3], s2[1] = s[4];
    hour = (int)atoi(s);
    min = (int)atoi(s2);
    if (hour >= 12) { // PM
      if (hour > 12) {
        hour %= 12;
      }
      printf("%02d:%02d %s\n", hour, min, pm);
    } else { // AM
      if (hour == 00) {
        hour = 12;
      }
      printf("%02d:%02d %s\n", hour, min, am);
    }

    // while end
  }
  // the end
} // DONE