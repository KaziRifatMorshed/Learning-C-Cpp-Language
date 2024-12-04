// 230220
#include <bits/stdc++.h>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  char s1[102] = {0}, s2[102] = {0}, ans[102] = {0};
  get s1;
  get s2;
  for (int i = 0; s1[i] != '\0'; i++) {
    ans[i] = '0' + (int)((int)(s1[i]) ^ (int)(s2[i]));
  }
  cout << ans;
  // the end
} // DONE