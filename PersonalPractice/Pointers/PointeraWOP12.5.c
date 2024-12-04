#include "stdio.h"
int main() {
  char *name;
  int length;
  char *cptr = name;
  name = "DHAKA";
  while (*cptr != '\0') {
    printf("%c is at %u\n", *cptr, cptr);
    cptr++;
  }
  length = cptr - name;
  printf("%d", length);
  return 0;
}