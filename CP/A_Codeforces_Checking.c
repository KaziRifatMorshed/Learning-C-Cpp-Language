#include <stdio.h>
#include <string.h>

int main(void) {
  char str_main[] = "codeforces";
  int t = 0;
  char inputt[2];
  scanf("%d", &t);
  getchar();
  while (t--) {
    scanf("%s", inputt);
    getchar();
    if (strstr(str_main, inputt)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }
} // done