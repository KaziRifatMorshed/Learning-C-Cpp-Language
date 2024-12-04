#include <ctype.h> // forgot
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  int t = 0;
  scanf("%d", &t);
  getchar();
  char str[1001] = {0};
  while (t--) {
    gets(str);
    int len = strlen(str);
    int i = 0, j = 0;
    for (i = 1, j = 1; j <= len; i++, j += 2) {
      str[i] = str[j];
    }
    str[i] = '\0';
    printf("%s\n", str);
  } // WORKING
} // SUBMITTED