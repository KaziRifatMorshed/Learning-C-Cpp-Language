#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  int value, x, y;               // NEED TO DECLARE x and y
  value = (x = 4, y = 5, x + y); // IT WORKS
  // scanf("%d", &);
  printf("%d", value);
}