#include <ctype.h>
#include <stdio.h>
int main(void) {
  char str[1000];
  scanf("%[^\n]s", str);
  str[0] = toupper(str[0]);
  printf("%s", str);
} // done