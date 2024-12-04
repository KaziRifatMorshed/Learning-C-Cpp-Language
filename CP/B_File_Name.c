#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int is_xxx(char *s, int i) {
  if (s[i] == 'x' && s[i + 1] == 'x' && s[i + 2] == 'x') {
    return true;
  } else {
    return false;
  }
}
// BUJHI NAI VALO VABE
int main(void) {
  int len = 0;
  char str[101] = {0};
  int result = 0;
  scanf("%d", &len);
  getchar();
  gets(str);
  for (int i = 0; i < (len - 2); i++) {
    if (is_xxx(str, i)) {
      result++;
    }
  }
  printf("%d", result);
  /// eof
} // DONE