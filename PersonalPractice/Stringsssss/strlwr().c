#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[] = "MeAW";
  char str2[10] = {0};
  str2 = strlwr(); // DOESN'T WORK
  printf("1.%s\t2.%s", str1, str2);
}