#include <stdio.h>
#include <string.h>
// Divide and Conquer
int DivAndConc(char *str, int len, int start, int ci) { // Cursed Recursion
  int count = 0;
  // base case
  if (ci == 4) {
    for (int i = start; str[i] != '\0'; i++) {
      if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
          str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
          str[i] == 'o' || str[i] == 'u') {
        count++;
      }
    }
    return count;
  }

  for (int i = start; i < start + (int)(len / 4); i++) {
    if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' ||
        str[i] == 'U' || str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
        str[i] == 'o' || str[i] == 'u') {
      count++;
    }
  }

  //
  return count + DivAndConc(str, len, start + (int)(len / 4), ci + 1);
}

int main(void) {
  char str[] =
      " I am a dosco dancer, biri KhelE HOY CANCER, opps, xyzee"; // result ==
                                                                  // 10
  int len = strlen(str);                                          // len == 33
  int result = DivAndConc(str, len, 0, 0);
  printf("%d", result);
  // End
} // DONE && WORKING