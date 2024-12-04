/*Write a program to get a string from the user. Remove all the spaces from the
 * front AND BACK of the input string. Finally, output the result string.*/
#include <ctype.h>
#include <stdio.h>
#include <string.h>

void swap_one_char(char *first, char *last) { *first = *last; }

int main(void) {
  char str[100] = {0};
  scanf(" %[^\n]s", str);
  int len = strlen(str), alphaNum = 0;

  // Search First Char position
  for (int i = 0; i < len; i++) {
    if (isalnum(str[i]) != 0) {
      alphaNum = i;
      break;
    }
  }
  // Cut Left Side
  for (int i = 0, j = alphaNum; i < len; i++, j++) {
    swap_one_char(&str[i],
                  &str[j]); // I did it intentionally but avoid it as it will
                            // creat a new stack for per loop, instead, get your
                            // job done inside the loop
  }

  // Upadte Str Lenght
  len = strlen(str);
  // Search Last char position and put '\0'
  for (int i = len; 1; i--) {
    if (isalnum(str[i]) != 0) {
      str[i + 1] = '\0'; // If (i) has last char then (i+1) has '\0'
      // alphaNum = i;
      break;
    }
  }
  // Cut Right Side // OPTIONAL
  for (int i = strlen(str); i <= len; i++) {
    str[i] = '\0';
  }

  // RESULT
  printf("%s", str);
} // done

// Kazi Rifat Morshed
// ID 230220