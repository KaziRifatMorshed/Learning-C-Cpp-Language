// GOG
#include <stdio.h>
#include <string.h>

int main() {
  int len = strspn("geeks for geeks", "geeks for");
  printf("Length of initial segment matching : %d\n", len);
  return (0);
}

/*The strspn() function returns the length of the initial substring of the
string pointed to by str1 that is made up of only those character contained in
the string pointed to by str2.

Syntax :

size_t strspn(const char *str1, const char *str2)
str1 : string to be scanned.
str2 : string containing the
characters to match.
Return Value : This function
returns the number of characters
in the initial segment of str1
which consist only of characters
from str2.
*/