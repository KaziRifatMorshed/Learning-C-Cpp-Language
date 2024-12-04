#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  int i = 3, j = 7;
  int t = 0;
  t = i, i = j, j = t; // IT WORKS
  // scanf("%d", &);
  printf("%d %d %d", i, j, t);
}