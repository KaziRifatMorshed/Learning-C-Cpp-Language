#include <stdio.h>

int FindAB(char *str) {
  if (*str == '\0') {
    return 0;
  } else if (*(str) == 'a' && *(str + 1) == 'b') {
    return 1 + FindAB(str + 1);
  } else {
    return FindAB(str + 1);
  }
}

int main(void) {
  char str[100] = {0};
  printf("input a string\vwe will count 'ab':\n");
  scanf("%[^\n]s", str);
  printf("there are %d 'ab' here ;) ", FindAB(str));
} // WORKING