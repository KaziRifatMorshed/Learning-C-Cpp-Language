// 1. Write a program to get a string from the user. Replace all the occurrences
// of "abc" in the string by "cd". Output the result string after replacement.
#include <stdio.h>
#include <string.h>
int main(void) {
  char str[100] = {0};
  printf("input a string that contains abc : ");
  scanf("%[^\n]s", str);
  // int len = strlen(str);

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'a' && str[i + 1] == 'b' && str[i + 2] == 'c') {
      str[i] = 'c';
      str[i + 1] = 'd';
      for (int j = i; str[j] != '\0'; j++) {
        // str[i + 2] = str[i + 3]; // ? why it is not coping null character !!!
        str[j] = str[j + 1];
      }
    }
  }
  printf("%s", str);
} // done

// Kazi Rifat Morshed
// ID 230220