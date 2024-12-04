/*Given a string, the task is to reverse the order of the words in the given
string.

Examples:

Input: s = “geeks quiz practice code”
Output: s = “code practice quiz geeks”

Input: s = “i love programming very much”
Output: s = “much very programming love i” */
#include <stdio.h>
#include <string.h>
int main(void) {
  char str_in[100] = "i.love.programming.very.much";
  char temp[100] = {0};
  char str_out[100] = {0};
  int len = strlen(str_in);

  for (int i = len - 1; i >= 0; i--) {
    if (str_in[i] == '.') {
      temp[0] = '\0'; // OPTIMIZED
      strcpy(temp, &str_in[i + 1]);
      strcat(temp, ".");
      strcat(str_out, temp);
      str_in[i] = '\0';
    }
    if (i == 0) {
      temp[0] = '\0';
      strcpy(temp, &str_in[i]);
      // strcat(temp, "."); // DELETING THIS LINE MADE THE WORD DONE
      strcat(str_out, temp);
      str_in[i] = '\0';
    }
  }
  printf("%s", str_out);
} // COMPLETED