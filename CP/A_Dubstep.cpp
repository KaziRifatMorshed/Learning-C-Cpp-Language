#include <cstring>
#include <iostream>
#include <string.h>

void delete_them(char *str) {
  for (int i = 0; str[i] != '\0'; i++) {
    str[i] = str[i + 3];
  }
}

int main(void) {
  char str[201] = {0};
  std::cin >> str;

  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B') {
      delete_them(&str[i]);
      // str[i] = str[i + 3];
      // str[i + 1] = str[i + 4];
      // str[i + 2] = str[i + 5];
    }
    if (str[i] == 'W' && str[i + 1] == 'U' && str[i + 2] == 'B' && i != 0) {
      str[i] = ' ';
      delete_them(&str[i + 1]);
    }
  }
  std::cout << str;
}