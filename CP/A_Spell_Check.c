#include <stdio.h>
#include <string.h>
#define true 1
#define false 0
int main(void) {
  int t = 0;
  scanf("%d", &t);

  while (t--) {

    int n = 0, checker = true;
    scanf("%d", &n);
    char ch;
    int i = 1;

    while (scanf(" %c ", &ch)) {

      if (ch == 'T' || ch == 'i' || ch == 'm' || ch == 'u' || ch == 'r') {
        checker = true;
      } else {
        checker = false;
        break;
      }
      i++;
      if (i == n) {
        break;
      }
    }

    if (n == 5 && checker == true) {
      printf("Yes\n");
    } else {
      printf("No\n");
    }
  }
  // end
} // incompleted