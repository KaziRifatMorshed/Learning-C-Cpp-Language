#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int main(void) {
  for (int t = 0; t <= 10; ++t) { // SAME
    printf("%d ", t);
  }
  //
  printf("\n");
  for (int t = 0; t <= 10; ++t) { // SAME
    printf("%d ", ++t);
  }
}