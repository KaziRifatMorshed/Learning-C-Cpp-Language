#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  int a = 4;

  int b = (++a) + (++a); // == 12
  a = 4;
  int c = (++a) + (a++); // == 11
  a = 4;
  int d = (a++) + (++a); // == 10
  a = 4;
  int e = (a++) + (a++); // == 9

  printf("%d %d %d %d", b, c, d, e);
  // READ PRECEDENCE
}
// ? #gcc 12 11 10 9
// ! #clang 11 10 10 9
// ! FUN FACT !! My thing and CLANG's thinking is same ;)
