/*//
****
***
**
*
//*/
#include <stdio.h>
#include <time.h>
int main(void) {
  printf("\n");
  int i = 5, j; // Careful, desired value theke value ek barao
  while (--i) {
    j = i;
    while (j--) {
      printf("*");
    }
    printf("\n");
  }
}