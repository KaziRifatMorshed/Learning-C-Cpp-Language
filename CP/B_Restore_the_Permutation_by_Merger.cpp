#include <cctype>
#include <cstdlib>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef signed long long int ulli;

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
int main(void) {
  int t = 0;
  sf(t);
  while (t--) {
    int n = 0;
    int sieve[10];
    sf(n);
    char arr[52];
    scanf(" [^\n]s");
    for (int i = 0; arr[i] != '\n'; i++) {
      char ch = arr[i];
      if (isdigit(ch) == 0) {
        int temp = ch - 48;
        sieve[temp] = 1;
      }
    }
    for (int i = 0; i < 10; i++) {
      if (sieve[i] == 1) {
        printf("%d ", i);
      }
    }
    putchar('\n');
  }
  // end
}