#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

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
  FILE *f1 = fopen("file10.txt", "r");
  int i = 0;
  char c, str[1000], temp[50];

  while ((c = fgetc(f1)) != EOF) {
    str[i] = c;
  }
  rewind(f1);
  while (fscanf(f1, "%s", temp)) {
    int count = 0;
    char *p;
    if ((p = strstr(str, temp)) != NULL) {
      count++;
      remove_word(p, temp);
    }

    printf("|%s has occurred %d times|\n", temp, count);
  }
  fclose(f1);
}