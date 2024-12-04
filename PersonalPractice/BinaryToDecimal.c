/*Binary Translator: Build a program that can translate decimal numbers to
 * binary and vice versa. Allow the user to choose the conversion direction and
 * provide the corresponding input. For example, entering "1010" in
 * decimal-to-binary mode should output "10".*/

#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// void strrev(char *first) {
//   int len = strlen(first);
//   char temp;
//   for (int i = 0; i < (len / 2); i++) {
//     temp = *(first + len - 1 - i);
//     *(first + len - 1 - i) = *(first + i);
//     *(first + i) = temp;
//   }
// }

void strrev(char *first) {
  int len = strlen(first);
  char temp;
  for (int i = 0; i < (len / 2); i++) {
    // first[len-] == '\0'; first[len-1] is last char
    temp = first[(len - 1) - i];
    first[(len - 1) - i] = first[i];
    first[i] = temp;
  }
}

int main(void) {
  char str[101] = {0};
  int sum = 0;
  scanf("%[^\n]s", str);
  strrev(str);
  printf("%s\n", str);
  for (int i = 0; str[i] != '\0'; i++) {
    sum += (int)(str[i] - '0') * (int)pow(2, i);
    // sum += (int)(atoi(&str[i])) * (int)pow(2, i);
    printf("%d\n", sum);
  }
  printf("decimal = %d", sum);
} // DONE

// this program can be optimized by running the loop from len-1 index