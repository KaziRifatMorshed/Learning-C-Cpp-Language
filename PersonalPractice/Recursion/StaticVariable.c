#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

/* OUTPUT
< after declaration  11
after a++ = 12 >
< after declaration  12
after a++ = 13 >
< after declaration  13
after a++ = 14 >
< after declaration  14
after a++ = 15 >
*/

void meaw() {
  static int a = 11; // was executed once and got stucked to the memory
  printf("< after declaration = %d\n", a);
  a++;
  printf("after a++ = %d >\n", a);
}

int main(void) {
  meaw();
  meaw();
  meaw();
  meaw();
  // printf("|| a == %d ||", a); // NOT RESPONDING
} // done