// 2. Write a program to get a string from the user. Replace all the occurrences
// of "cd" in the string by "abc". Output the result string after replacement.
#include <stdio.h>
#include <string.h>
// Hard
void shift(char *first, int n) {  // n == where shifting will end
  int len = strlen(first);        // NEED TO CHECK LENGTH EACH TIME
  for (int i = len; i > n; i--) { // CONDITION
    *(first + i + 1) = *(first + i);
    // *(first + i) = *(first + i - 1); // USELESS
  }
  // *(first + n) = ' ';
}

int main(void) {
  char str[100] = {0};
  scanf("%[^\n]s", str);
  // int len = strlen(str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'c' && str[i + 1] == 'd') {
      shift(str, i); // I WAS !!! PASSING (i + 2)
      str[i] = 'a';
      str[i + 1] = 'b';
      str[i + 2] = 'c';
    }
  }
  printf("%s", str);
} // DONE
// Kazi Rifat Morshed
// ID 230220
