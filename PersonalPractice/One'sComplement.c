#include "stdio.h"
#include <string.h>

int main() {
  int i;
  char input[100];
  printf("\ninput= ");
  // scanf("%s", &input);
  gets(input);

  for (i = strlen(input) - 1; i >= 0;
       i--) { // remove the null character, so use minus one
    if (input[i] == '0') {
      input[i] = '1';
    } else if (input[i] == '1') {
      input[i] = '0';
    } else {
      printf("you have  wrong input");
      return 0; // for using this, the main() will be terminated there
    }
  }

  printf("One's Complement = %s", input);
  printf("\nPROGRAM TERMINATED");
  return 0;
}
//==========================
// if (input[i] == '0') {
//  input[i] = '1';
//} else if (input[i] == '1') {
//  input[i] = '0';
//} else {
//  printf("you have  wrong input");
//}