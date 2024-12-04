#include "stdio.h"
#include "string.h"

int main(void) {

  int t = 0, num = 0;
  scanf("%i", &t);
  while (t--) {
    scanf("%i", &num);
    if (num <= 1399) {
      printf("Division 4\n");
    } else if (1400 <= num && num <= 1599) {
      printf("Division 3\n");
    } else if (1600 <= num && num <= 1899) {
      printf("Division 2\n");
    } else if (1900 <= num) {
      printf("Division 1\n");
    }
  }
}//done
