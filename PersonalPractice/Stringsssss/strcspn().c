#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[] = "     faltu Khabar yz  p    ";
  printf("strlen = %d\n", (int)strlen(str1));
  int n = strcspn(str1, "");
  printf("%d", n);
} // done

/*
The C library function strcspn() calculates the length of the number of
characters before the 1st occurrence of character present in both the string.
Syntax :

strcspn(const char *str1, const char *str2)

Parameters:
str1 : The Target string in which search has to be made.
str2 : Argument string containing characters
to match in target string.

Return Value:
This function returns the number of characters before the 1st occurrence
of character present in both the string.

*/