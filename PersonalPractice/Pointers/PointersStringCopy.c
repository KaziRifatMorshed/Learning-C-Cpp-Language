#include "stdio.h"
#include "string.h"
// #include <algorithm>

void copy(char *s1, char *s2) {
  while ((*s2++ = *s1++) != '\0') {
  };
}
// NOTE THAT char *str1 = "afnhai"  IS NOT WORKING
int main(void) {
  char str1[100] = "I am a disaSDFbvwILFEGOLWFGco Dancer ";
  printf("str 1 = %s\n", str1);
  char *str2;
  copy(&str1, &str2);
  printf("str 2 = %s\n", str2);
}