#include <ctype.h>
#include <stdio.h>
#include <string.h>

int WordCounter(char *str) {
  // int len = strlen(str); // USELESS
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if ((isalnum(str[i]) != 0 || ispunct(str[i])) &&
        (str[i + 1] == ' ' || str[i + 1] == '\0')) {
      count++;
    }
  }
  return count;
}

int main(void) {
  char str[] = "  I Am a Disco dancer, Pa P a";
  printf("Word Count: %d", WordCounter(str));
} // DONE