#include "stdio.h"
#include <string.h>

int main() {
  int i,j;
  char input[100];
  printf("\ninput= ");
  // scanf("%s", &input);
  gets(input);

  for (i = strlen(input) - 1; i >= 0; i--) {
    if (input[i] == '1') {
      for (j = i; j >= 0; j--) {//second loop
        if (input[j] == '0') {
          input[j] = '1';
        } else if (input[j] == '1') {
          input[j] = '0';
        } // else {
        // printf("you have  wrong input");
        // return 0; // for using this, the main() will be terminated there
      }
      break; // put break at right place
    
    }
  }


printf("Two's Complement = %s", input);
printf("\nPROGRAM TERMINATED");
return 0;
}