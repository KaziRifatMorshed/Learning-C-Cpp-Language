#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char inputstring[102] = {0};
  int charSet[256] = {0};

  scanf("%[^\n]s", inputstring);

  int length = strlen(inputstring), count = 0;

  for (int i = 0; inputstring[i] != '\0'; i++) {
    int temp = toascii(inputstring[i]);
    charSet[temp]++;
  }

  for (int i = 97; i <= 122; i++) {
    if (charSet[i] >= 1) {
      count++;
    }
  }

  if (count % 2 == 0) {
    printf("CHAT WITH HER!");
  } else {
    printf("IGNORE HIM!");
  }
} // done