#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  int t = 0;
  scanf("%d", &t);
  getchar();
  while (t--) {
    char str[5001] = {0};
    int m = 0, p = 0, len = 0;
    scanf("%d", &len);
    getchar(); // NEED another dummy getchar !!!!!!!!
    gets(str);
    // scanf("%[^\s]", str);
    //  int len = strlen(str);
    for (int i = 0; i < len; i++) {
      if (str[i] == '+') {
        ++p;
      } else if (str[i] == '-') {
        ++m;
      }
    }
    printf("%d\n", abs(m - p));
  }
  // EOF
} // done