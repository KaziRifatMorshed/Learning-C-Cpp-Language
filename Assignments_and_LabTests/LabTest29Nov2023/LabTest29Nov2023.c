// SET B
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int CountVowels(char *str) {
  int count = 0;
  for (int i = 0; str[i] != '\0'; i++) {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u') {
      count++;
    }
  }
  return count;
}
/*
int CountVowels_V2(char *str, int start, int end) {
  int count = 0;
  for (int i = start; i <= end; i++) {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u') {
      count++;
    }
  }
  return count;
}
*/
int main(void) {
  char str[1000] = {0};
  int arr[4];
  int len = strlen(str);
  int quart = len / 4;
  scanf(" %[^\n]", str);
  //
  char str1[100] = {0};
  char str2[100] = {0};
  char str3[100] = {0};
  char str4[100] = {0};
  // 1
  for (int i = 0, j = 0; i < quart; i++, j++) {
    str1[j] = str[i];
  }
  arr[0] = CountVowels(str1);
  // 2
  for (int i = quart, j = 0; i < quart * 2; i++, j++) {
    str2[j] = str[i];
  }
  arr[1] = CountVowels(str2);
  // 3
  for (int i = 2 * quart, j = 0; i < 3 * quart; i++, j++) {
    str3[j] = str[i];
  }
  arr[2] = CountVowels(str3);
  // 4
  for (int i = 3 * quart, j = 0; str[i] != '\0'; i++, j++) {
    str4[j] = str[i];
  }
  arr[3] = CountVowels(str4);
  //
  // Now, Sum them
  int sum = 0;
  for (int k = 0; k < 4; k++) {
    sum += arr[k];
  }
  // Result
  printf("</%d>", sum);

  // The End
} // WORKING