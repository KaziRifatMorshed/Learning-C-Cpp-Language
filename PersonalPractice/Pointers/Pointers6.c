#include <stdio.h>
#include <stdlib.h>

int n = 0; /* a global variable*/
int main(int argc, char **argv) {
  char str[6] = "Hello"; /* String variable*/
  char *cptr = str;
  static int st; /* static local variable */
  int at;        /* automatic variable */
  int *ptr;      /* pointer variable */
  // printf("&n    = %p\n", (void *)&n);
  printf("&n    = %p\n", &n);
  printf("&st   = %p\n", (void *)&st);
  printf("&at   = %p\n", (void *)&at);
  printf("&ptr  = %p\n", (void *)&ptr);
  printf("&cptr = %p\n", (void *)&cptr);
  // free(ptr);
  return 0;
}
/*
&n    = 0x562405887024
&st   = 0x562405887028
&at   = 0x7ffd31a53cbc
&ptr  = 0x7ffd31a53cc8
&cptr = 0x7ffd31a53cc0
*/
