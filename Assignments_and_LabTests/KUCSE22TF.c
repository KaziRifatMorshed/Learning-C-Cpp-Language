#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  int i = 0;
  scanf("%d", &i);
  printf("1 2 3 4 ");
  for (int j = 5; j <= i; j++) {
    printf("%d ", ((j - 1) * (j - 3) - (j - 2) * (j - 4)));
  }
} // DONE