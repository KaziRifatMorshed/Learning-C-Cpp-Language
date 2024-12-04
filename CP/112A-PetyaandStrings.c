#include "stdio.h"
#include "string.h"
#include <strings.h>

int main(void) {
  char s1[101] = {0}, s2[101] = {0};
  gets(s1);
  gets(s2);
  // printf("%d", strcasecmp(s1, s2));
  if (strcasecmp(s1, s2) == 0) {
    printf("0");
  } else if (strcasecmp(s1, s2) > 0) {
    printf("1");
  } else if (strcasecmp(s1, s2) < 0) {
    printf("-1");
  }
}