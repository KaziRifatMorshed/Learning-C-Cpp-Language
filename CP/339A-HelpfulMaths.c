#include "stdio.h"
#include <string.h>
#include <strings.h>

int main(void) {
  int num1count = 0, num2count = 0, num3count = 0;
  char inputstr[100] = {0};

  gets(inputstr);
  // getchar();
  //  count digits
  for (int i = 0; inputstr[i] != '\0'; i++) {
    if (inputstr[i] == 49) {
      num1count++;
    } else if (inputstr[i] == 50) {
      num2count++;
    } else if (inputstr[i] == 51) {
      num3count++;
    }
  }
  // int len = strlen(inputstr);
  /*  //  print them
    for (int i = 0; i < num1count; i++) {
      printf("1+");
    }
    for (int i = 0; i < num2count; i++) {
      printf("2+");
    }
    for (int i = 0; i < num3count; i++) {
      if (i == num3count - 1) {
        printf("3");
      } else {
        printf("3+");
      }
    }*/

  // print them

  for (int i = 0; i < num1count; i++) {
    if ( i == 0 || i == num1count - 1) {
      printf("a");
    } else if (num1count > 1) {
      printf("+1");
    }
  }
  for (int i = 0; i < num2count; i++) {
    printf("2+");
  }
  for (int i = 0; i < num3count; i++) {
    if (i == num3count - 1) {
      printf("3");
    } else {
      printf("3+");
    }
  }
}//incomplete
