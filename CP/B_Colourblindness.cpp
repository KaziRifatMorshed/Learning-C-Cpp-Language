#include <cmath>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define nl printf("\n")
#define sf(n) scanf("%llu", &n)
#define sff(n, m) scanf("%d%d", &n, &m)
#define sfl(n) scanf("%I64d", &n)
#define sffl(n, m) scanf("%I64d %I64d", &n, &m)

#define pfulli(n) printf("%lld", n)
#define pf(n) printf("%d", n)
#define pff(n, m) printf("%d %d", n, m)
#define pffl(n, m) printf("%I64d %I64d", n, m)
#define pfl(n) printf("%I64d", n)
#define pfs(s) printf("%s", s)

#define true 1
#define false 0

int main(void) {
  ulli t = 0;
  char str[101][2];
  sf(t);
  while (t--) {
    int flag = false;
    ulli n = 0;
    sf(n);
    // for (int i = 0; i < n; i++) {
    //   scanf("%c", &str[i][0]);
    // }
    // for (int i = 0; i < n; i++) {
    //   scanf("%c", &str[i][1]);
    // }
    gets(str[0][]);

    // search
    for (int i = 0; i < n - 1; i++) {
      if ((str[i][0] == 'G' and str[i + 1][0] == 'B') ||
          (str[i][0] == 'B' and str[i + 1][0] == 'G') ||
          (str[i][1] == 'G' and str[i + 1][1] == 'B') ||
          (str[i][1] == 'B' and str[i + 1][1] == 'G') ||
          //
          (str[i][0] == 'G' and str[i][1] == 'B') ||
          (str[i][0] == 'B' and str[i][1] == 'G')) {
        // pfs("YES\n");
        flag = true;
      }
    }
    if (flag) {
      pfs("YES\n");
    } else {
      pfs("NO\n");
    }
  }
}