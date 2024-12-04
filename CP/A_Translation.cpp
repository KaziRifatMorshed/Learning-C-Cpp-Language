#include <stdio.h>
#include <string.h>

void strrev(char *str) {
  int length = strlen(str);
  for (int i = 0, j = length - 1; i < j; i++, j--) {
    char temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main(void) {
  char s1[102]; // CAREFUL: KEEP IT MORE THAN 100
  char s2[102];
  // scanf("%[^\n]s", s1);
  gets(s1);
  // getchar();
  // scanf("%[^\n]s", s2);
  gets(s2);
  strrev(&s2[0]);
  if (strcmp(s1, s2) == 0) {
    printf("YES");
  } else {
    printf("NO");
  }
} // DONE