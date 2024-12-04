#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[] = "    I  Love  My   country  baNgladesh     ";
  // int len = strlen(str1);
  char str_out[30] = {0};
  // char temp[15] = {0};
  char *token;
  token = strtok(str1, " ");
  while (token != NULL) {
    strcat(str_out, token);
    strcat(str_out, " ");
    token = strtok(NULL, " ");
  }
  printf("%s", str_out);
} // WORKS but doesn't run locally in LINUX 