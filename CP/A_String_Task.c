#include <ctype.h>
#include <stdio.h>
int main(void) {
  char str[1000] = {0};
  scanf("%[^\n]s", str);
  for (int i = 0; i < 1000; i++) {
    if (str[i] == 'A' || str[i] == 'Y' || str[i] == 'y' || str[i] == 'E' ||
        str[i] == 'I' || str[i] == 'O' || str[i] == 'U' || str[i] == 'a' ||
        str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
        str[i] == ' ' || (str[i] < 'A' && str[i] > 'Z') ||
        (str[i] < 'a' && str[i] > 'z')) {
      continue;
    }
    if (str[i] == '\0') { // I placed this if statement in line-17 after ".%c"
      break;
    }
    printf(".");
    printf("%c", tolower(str[i]));
  }
} // done