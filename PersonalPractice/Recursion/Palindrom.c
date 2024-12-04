#include <ctype.h>
#include <stdio.h>
#include <string.h>
// #include "stdbool.h"
#define true 1
#define false 0

int Palindrome(char *str, int len, int half_len, int ci) {
  if (ci <= half_len) {
    if (str[ci] == str[len - ci - 1]) {       // minus 1
      Palindrome(str, len, half_len, ci + 1); // RECURSION
    } else {
      return false;
    }
  }
  return true;
}

int main(void) {
  char str[10] = " MaDaM";
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = tolower(str[i]); // we can't convert a whole string at once
  }
  int len = strlen(str);
  int half_len = (len - 1) / 2;
  printf("%d", Palindrome(str, len, half_len, 1));
}
/*
DIFFERENT WORKFLOW
int Palindrome(char *str, int len, int ci) {
  if (len == 0 || len == 1) { // আগের কাজ আগে
    return true;              // CAREFUL not false
  }
  if (str[ci] == str[len - 1 - ci]) {
    Palindrome(str, len, ci + 1);
    // return true; // THINK CAREFULLY, This line is unnecessary and WRONG
    // return ;
  } else {
    return false;
  }
}*/
