#include <stdio.h>
#include <string.h>

void trimstring(char *str) {
  int i, len = strlen(str);
  i = (strpbrk(str, " ") - str); // Returnes a pointer
  for (int a = 0; str[a] != '\0'; a++) {
    str[a] = str[i + a];
  }
  len = strlen(str); // UPDATE LENGTH
  for (int j = len - 1; str[j] == ' '; j--) {
    str[j] = '\0';
  }
}

int main(void) {
  char str[100] = "     I live in a beautiful        village.           ";
  // scanf("%[^\n]s", str);
  // int len = strlen(str);
  trimstring(str);
  printf("%s", str);
} // DONE


  /*This function finds the first character in the string s1 that matches any
  character specified in s2 (It excludes terminating null-characters).   Syntax :
  char *strpbrk(const char *s1, const char *s2)
  
  Parameters :
  s1 : string to be scanned.
  s2 : string containing the characters to match.
  
  Return Value :
  It returns a pointer to the character in s1 that
  matches one of the characters in s2, else returns NULL.*/