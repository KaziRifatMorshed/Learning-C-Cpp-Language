#include <stdio.h>

int main() {
  char text[1000];
  int freq[256] = {0};
  int i;

  printf("Enter a text: ");
  gets(text);

  for (i = 0; text[i] != '\0'; i++) {
    freq[text[i]]++;
  }

  for (i = 0; i < 256; i++) {
    if (freq[i] > 0) {
      printf("Character: %c, Frequency: %d\n", i, freq[i]);
    }
  }

  return 0;
} // working
// damn you BARD
