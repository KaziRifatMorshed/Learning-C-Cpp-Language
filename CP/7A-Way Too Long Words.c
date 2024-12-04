#include "stdio.h"
#include <string.h>
int main() {
  int l,n=0,i=0;
  char a[100];
  scanf("%d", &n);
  while (n--) {
    scanf(" %s", a); // note: whitespace then %s
    l = strlen(a);
    if (l <= 10) {
      printf("%s\n", a);
    } else {
      printf("%c%d%c\n", a[0], l - 2, a[l - 1]);
    }
  }
  return 0;
}
/*
 scanf("%c", &a[100]);

  if (strlen(a) <= 10) {
    printf("%c",a);
  }
  else {
  printf("%c%d%c",a[0],strlen(a)-2,);
  }
*/
