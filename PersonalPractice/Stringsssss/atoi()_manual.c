/*The atoi() function in C takes a string (which represents an integer) as an
argument and returns its value of type int. So basically the function is used to
convert a string argument to an integer.

Syntax of atoi()
int atoi(const char str);*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100] = {0};
  int num = 0;
  scanf("%[^\n]s", str);
  // int len = strlen(str);

  for (int i = 0; str[i] != '\0'; i++) {

    if (str[i] >= '0' && str[i] <= '9') {
      num = num * 10 + (int)(str[i] - '0');
    }
  }
  if (str[0] == '-') {
    num = (-1) * num;
  }

  // for (int i = len - 1; i >= 0; i--) { // Accidentally Rev kore falaisi
  //   num = num * 10 + (int)(str[i] - '0');
  // }

  printf("NUM = %d", num);
} // DONE