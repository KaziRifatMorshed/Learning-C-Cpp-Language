#include "stdio.h"
#include "string.h"

int main(void) {
  int t = 0, value = 0;
  char input[4]; // I forgot to put 4 (3 for x++, one for \0)
  scanf("%d", &t);
  getchar(); // seam told to add it
  // printf(" ");
  while (t--) {
    gets(input);
    if (strcmp(input, "X++") == 0) {
      value++;
    } else if (strcmp(input, "X--") == 0) {
      value--;
    } else if (strcmp(input, "++X") == 0) {
      ++value;
    } else if (strcmp(input, "--X") == 0) {
      --value;
    }
  }
  printf("%i", value);
}