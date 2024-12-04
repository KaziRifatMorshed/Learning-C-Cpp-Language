#include <stdio.h>

void main()

{
  int i = 2, n = 2, j;

  scanf("%d", &n);

  while (i < n) {
    if (n % i == 0) {
      j = 0;
      break;
    } else {
      j = 1;
    }
    i++;
  }

  if (j == 0) {
    printf("it is not prime");
  } else {
    printf("it is PRIME !!!");
  }
}
//done