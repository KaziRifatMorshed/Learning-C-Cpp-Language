#include <stdio.h>
#include <string.h>
int main(void) {
  printf("Please input a string or a sentence and hit Enter :\n");

  char i_am_a_string[50] = {0}; // ৫০ তম ক্যারেক্টার নাল ক্যারাক্টার
  gets(i_am_a_string);          // getString
  // scanf("%[^\n]s",&i_am_a_string);
  /*Here, [] is the scanset character. ^\n tells to take input until newline
    doesn’t get encountered. Here we used ^ (XOR -Operator ) which gives true
    until both charqwacters are different. Once the character is equal to
    New-line (‘\n’),  ^ (XOR Operator ) gives false to read the string. So we
    use “%\ns” instead of “%s”. So to get a line of input with space we can go
    with scanf(“%[^\n]s”,str);*/

  // reminder: initial index zero;
  // last index STRLEN minus one ; NULL CHAR index is STRLEN

  int i = 0;
  while (i_am_a_string[i] != '\0') {
    i++; // i (<-) i + 1 // Just for understanding
  }

  // for (int i = 0; i_am_a_string[i] != '\0'; i++) // This i will work inside
  //  { // do nothing
  // }
  printf("from loop : %d and strlen: %d !", i, strlen(i_am_a_string));
} // done