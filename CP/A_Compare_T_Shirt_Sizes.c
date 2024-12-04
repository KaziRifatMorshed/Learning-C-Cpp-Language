#include <stdio.h>
#include <string.h>
int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int temp = 0, strr1 = 0, strr2 = 0;
    char str1[51] = {0};
    char str2[51] = {0};
    scanf("%s %s", str1, str2);
    for (int i = 0; str1[i] != '\0'; i++) {
      if (str1[i] == 'X') {
        strr1 += 1;
      }
      if (str1[i] == 'S') {
        strr1 *= -1;
      }
      if (str1[i] == 'L') {
        strr1 *= 1;
      }
      if (str1[i] == 'M') {
        strr1 = 0;
      }
    }

    if (temp == 0) {
      printf("=\n");
    } else if (temp > 0) {
      printf(">\n");
    } else if (temp < 0) {
      printf("<\n");
    }
  }
}

/*DIFFERENT APPROACH BUT NEED TO FIX CODE
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int temp = 0;
    char str1[51] = {0};
    char str2[51] = {0};
    // scanf(" %[^\n]", str1);
    // scanf(" %[^\n]", str2);
    scanf("%s %s", str1, str2);

    temp *= (-1) * strcmp(str1, str2);

    if (temp == 0) {
      printf("=\n");
    } else if (temp > 0) {
      printf(">\n");
    } else if (temp < 0) {
      printf("<\n");
    }
  }*/