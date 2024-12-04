#include "stdio.h"
#include "string.h"

int addvalue(int *p1, int *p2) {
  *p1 = *p1 + 3;
  *p2 = *p2 + 5;
}

int main(void) {
  int a = 10, b = 20, *p1 = &a, *p2 = &b;

  printf("%d %d\n", a, b);
  printf("%d %d\n", p1, p2);

  addvalue(&a, &b);

  printf("%d %d\n", *p1, *p2);

} /*
10 20
-6881488 -6881484
13 25
*/