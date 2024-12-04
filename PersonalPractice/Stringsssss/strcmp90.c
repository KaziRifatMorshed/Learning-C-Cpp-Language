#include <stdio.h>
#include <string.h>
int main(void) {
  while (1) {
    int temp = 0;
    char str1[10] = {0};
    char str2[10] = {0};
    scanf(" %[^\n]", str1);
    // printf("\n");
    scanf(" %[^\n]", str2);
    temp = (-1) * strcmp(str1, str2);
    printf("\"%d\"\n", temp);
  }
}