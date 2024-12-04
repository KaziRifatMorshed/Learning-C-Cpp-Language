#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int *p1;
  p1 = (int *)malloc(sizeof(int));
  // Next, we use the malloc function to dynamically allocate memory
  // for an integer. The sizeof(int) expression is used to determine
  // the size of an integer in bytes, and malloc returns a pointer to
  // the allocated memory. We cast this pointer to int* to match the
  // type of p1, and assign it to p1.
  printf("%p\n", p1);
  *p1 = 13;
  printf("%d\n", *p1);

  p1 = (int *)malloc(sizeof(int));
  printf("%p\n", p1);
  free(*p1);
}
/*0x559e8d2922a0
13
0x559e8d2926d0
*/