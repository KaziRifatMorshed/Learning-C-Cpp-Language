#include <stdio.h>
int main(void) {
  char str[5] = {0};
  str[0] = 127; // DEL won't print
  str[1] = 'B';
  str[2] = 27;
  // str[3] = 32; BLANK char will be printed as whitespace
  str[3] = 16;
  str[4] = 'd';
  printf("%s", str);
}