#include <stdio.h>
#include <string.h>

int main() {
  char str[] = "Hello, World!";
  char *ptr = strchr(str, 's'); // returning ADDRESS

  if (ptr != NULL) {
    printf("Character found at position: %ld\n", ptr - str);
    // better to use %ld as addresses are HUGE
  } else {
    printf("Character not found\n");
  }

  return 0;
}