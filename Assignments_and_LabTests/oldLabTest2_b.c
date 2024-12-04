/*
2. Write a program to take a string with spaces from the user. Your program will
print the string after trimming it. Let us assume that the input string is
"     I live in a beautiful        village.           ".
Your program will remove the spaces from the front and back of the string and
then print it. Thus, the output will be "I live in a beautiful        village."
For trimming (i.e., for removing spaces from the front and back) you need to
create a user-defined function called "trimstring" that takes a string as a
parameter. (30)*/
#include <stdio.h>
#include <string.h>

void trimstring(char *str) {
  int i, len = strlen(str);
  for (i = 0; str[i] == ' '; i++) {
  }
  for (int a = 0; str[a] != '\0'; a++) {
    str[a] = str[i + a];
  }
  len = strlen(str); // UPDATE LENGTH
  for (int j = len - 1; str[j] == ' '; j--) {
    str[j] = '\0';
  }
}

int main(void) {
  char str[100] = "     I live in a beautiful        village.           ";
  // scanf("%[^\n]s", str);
  // int len = strlen(str);
  trimstring(str);
  printf("%s", str);
} // done
