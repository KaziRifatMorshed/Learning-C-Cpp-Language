// codeforces 443A Anton and Letters
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main() {
  char input[1000] = {0}; // to store input characters
  int storage[128] = {0}; // to take count of individual characters
  int ascii = 0, i, count = 0;

  gets(input);
  // tolower(input);

  for (i = 0; i < 1000; i++) {
    ascii = toascii(input[i]);
    // converting each character to equivalent ascii value
    if (ascii >= 'A' && ascii <= 'Z') {
      storage[ascii]++; // of true
    } else if ((ascii >= 'a' && ascii <= 'z')) {
      storage[ascii - 32]++; // of true
    } else {
      storage[ascii] = 0; // if false or not found
    }
  }
  for (i = 65; i < 128; i++) {
    if (storage[i] > 0) {
      count++;
      // printf("%c has come %d times\n", (char)i , storage[i]);
    }
  }
  printf("%d", count);

  return 0;
}

/*
#include "stdio.h"
#include <ctype.h>
#include <string.h>

int main() {
  char input[1000]; // to store input characters
  int storage[128]; // to take count of individual characters
  int ascii = 0, i, count = 0;

  for (i = 0; i < 1000; i++) {
    input[i] = '\0'; // replace every cell of the array with null character
  }

  for (i = 0; i < 128; i++) {
    storage[i] = 0; // make everything zero in storge[]
    // printf("%d ",storage[i]); // init with garbage value
  }

  // scanf("%[^\n]", &input); // getting input

  gets(input);

  for (i = 0; i < 1000; i++) {
    ascii = toascii(
        input[i]); // converting each character to equivalent ascii value
    // printf("ASCII=%d ", ascii);
    if (ascii >= 'a' && ascii <= 'z') {
      storage[ascii] = 1; // of true
    } else {
      storage[ascii] = 0; // if false or not found
    }
  }
  for (i = 0; i < 128; i++) {
    if (storage[i] == 1) {
      count++;
    }
  }
  printf("%d", count);

  return 0;
}
*/
