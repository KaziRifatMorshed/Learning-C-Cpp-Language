#include <stdio.h>
#include <string.h>
// SEAM
int main() {
  char str[102];
  int arr[26] = {0}, i, len, count = 0;

  scanf("%s", str);

  len = strlen(str);

  for (i = 0; i < len; i++) {
    arr[str[i] - 'a']++;
  }

  for (i = 0; i < 26; i++) {
    if (arr[i] > 0) {
      count++;
    }
  }

  printf("%d\n", count);
} // done