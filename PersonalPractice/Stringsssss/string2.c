#include <stdio.h>
#include <string.h>
int main(void) {
  char str[40] = "Pakhi paka pepe khay";
  for (int i = 0; i < strlen(str); i++) {
    printf("_");
  }
  printf("\n%s\n", str);
  for (int i = 0; i < strlen(str); i++) {
    printf("-");
  }
}