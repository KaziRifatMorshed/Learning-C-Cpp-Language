#include <stdio.h>
int main(void) {
  freopen("text1.txt", "r", stdin); // nice
  int a, b, c = 3;
  while (c--) {
    scanf("%d %d", &a, &b);
    printf("%d %d \n", a, b);
  }
} // done