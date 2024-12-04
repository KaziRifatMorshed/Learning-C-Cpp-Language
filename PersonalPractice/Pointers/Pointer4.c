#include "stdio.h"

int main(void) {
  int i = 0, *j = &i;
  float p = 0, *q = &p;
  // int *j = &i; // I missed it
  //*j = i;
  for (; *j < 10; (*j)++) { // no need to initialize or call
    printf("%i", *j);
  }
  printf("\n%i", *j);
}