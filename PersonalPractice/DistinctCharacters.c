#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void) {
  char str[200] = "gcc (GCC) 13.2.1 20230801Copyright (C) 2023 Free Software "
                  "Foundation, Inc.This is free software z";
  int len = strlen(str);
  // char c = 'a';

  // Time Complexity O(n^2)
  for (char c = 'a'; c <= 'z'; c++) {
    int count = 0;
    for (int j = 0; j < len; j++) {
      str[j] = tolower(str[j]);
      if (str[j] == c) {
        count++;
      }
    }
    printf("%c => %d times\n", c, count);
  }
} // done

/*python

text3 = "A quick brown fox jumps over a lazy dog"

for c in "abcdefghijklmnopqrstuvwxyz":
    print(c, text3.count(c))
*/