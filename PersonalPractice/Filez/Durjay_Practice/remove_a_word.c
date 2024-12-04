/*
5. Write a C program to remove a word from text file.

file.txt
I love programming.
Programming with MM Sir is fun.
Learning C programming at KU is simple and easy.

Input from user which word will be removed.
*/
#include <stdio.h>
#include <string.h>
#define false 0
#define true 1

int remove_word(char *str, char *target) {
  int len = strlen(target);
  char *p = str;

  if (strstr(str, target) == NULL) {
    return false;
  }
  while ((p = strstr(str, target)) != NULL) {
    memmove(p, p + len + 1, strlen(p + len) + 1);
    // dest, source, size of source
    // memmove(src দিলে সোর্সের পয়েন্টার চেঞ্জ হয়ে যাবে , p + len + 1,
    // strlen(p+len) + 1); p + len + 1 দিলে একটা স্পেস মুছে দিবে
  }
  return true;
}

int main(void) {
  FILE *f = fopen("file5.txt", "r");

  char input_str[1000] = {0};
  for (int i = 0; fscanf(f, "%c", &input_str[i]) != EOF; i++) {
  }

  printf("input a string to remove: ");
  char target[50] = {0};
  scanf(" %[^\n]s", target);

  printf("before removing \"%s\" the string is:\n%s", target, input_str);

  // now remove the word
  remove_word(input_str, target);

  printf("after removing \"%s\" the string is:\n%s", target, input_str);

  fclose(f);
  f = fopen("file5.txt", "w+");
  fprintf(f, "%s", input_str);

  //
  fclose(f);
}