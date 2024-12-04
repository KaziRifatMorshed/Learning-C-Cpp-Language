#include <stdio.h>
#include <string.h>
int main(void) {
  char str1[] = "I am A Disco Dancer,";
  char str2[] = " Biri Khele hoy Cancer";
  char str3[60] = {0};
  /*C strcat() function appends the string pointed to by src to the end of the
   string pointed to by dest. It will append a copy of the source string in
   the destination string. plus a terminating Null character. The initial
   character of the string(src) overwrites the Null-character present at the
   end of the string(dest).
*/
  //
  // strcat(str1, str2);
  //
  strcpy(str3, str1);
  // int len_3 = strlen(str3); // 20
  //
  int i_str3, j_str2;
  for (i_str3 = 20, j_str2 = 0; str2[j_str2] != '\0'; i_str3++, j_str2++) {
    str3[i_str3] = str2[j_str2];
  }
  //
  printf("%s", str3);
} // done