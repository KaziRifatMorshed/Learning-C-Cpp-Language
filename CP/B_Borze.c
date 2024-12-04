// Kazi Rifat Morshed 230220
/*
32B Borze

Ternary numeric notation is quite popular in Berland. To telegraph the ternary
number the Borze alphabet is used.
Digit 0 is transmitted as «.»,
1 as «-.» and
2 as «--».
You are to decode the Borze code, i.e. to find out the ternary number
given its representation in Borze alphabet.

Input
The first line contains a number in Borze code. The length of the string is
between 1 and 200 characters. It's guaranteed that the given string is a valid
Borze code of some ternary number (this number can have leading zeroes). Output
Output
the decoded ternary number. It can have leading zeroes.

Examples

Input
.-.--
Output
012

Input
--.
Output
20

Input
-..-.--
Output
1012
*/

#include <stdio.h>
#include <string.h>
int main(void) {
  char str[201] = {0};
  char number[201] = {0};
  scanf("%s", str);
  // scanf(" %s[^\n]", str);
  // gets(str);

  int i = 0, j = 0;
  while (str[i] != '\0') {
    if (str[i] == '.') {
      number[j] = '0';
      i++;
    } else if (str[i] == '-' && str[i + 1] == '.') {
      number[j] = '1';
      i += 2;
    } else if (str[i] == '-' && str[i + 1] == '-') {
      number[j] = '2';
      i += 2;
    }
    j++;
  }
  printf("%s", number);
} // DONE