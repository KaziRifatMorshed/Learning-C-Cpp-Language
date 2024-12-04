// Replace a bunch of consecutive characters by another set of characters
#include <stdio.h>
int main(void) {

  printf("\nPlease input a string\vI will replace all by another "
         "character\vPlease input that character toooooooooooooo........\n");

  char str[100] = {0};
  gets(str);

  char second; // one length character , or, second[2]
  // gets(second); WILL NOT WORK HERE FOR SINGLE CHAR
  scanf("%c", &second);

  int i;
  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == second) {
      str[i] = '%';
    }
  }

  printf("%s", str);
} // done