#include "stdio.h"

/*//
int main() {
  int a = 0, b = 0, c = 0, d = 0;
  for (a = 1; a <= 3; a++) {
    for (b = 1; b <= 3; b++) {
      for (c = 1; c <= 3; c++) {
        //       for (d = 0; d <= 1; d++) {
        printf("%d %d %d\n", a, b, c);
        //       }
      }
    }
  }
  return 0;
}
*/
//====================================
/*
int main() {
  int a = 0, b = 0, c = 0, d = 0;
  for (a = 01; a <= 3; a++) {
    for (b = 01; b <= 3 && b != a; b++) {
      for (c = 01; c <= 3 && c != a && c != b; c++) {
        //       for (d = 0; d <= 1; d++) {
        printf("%d %d %d\n", a, b, c);
        //       }
      }
    }
  }
  return 0;
}
*/
//====================================

int main() {
  int a = 0, b = 0, c = 0;
  for (a = 01; a <= 3; a++) {
    for (b = 01; b <= 3; b++) {
      for (c = 01; c <= 3; c++) {
        //       for (d = 0; d <= 1; d++) {
        if (a == 1 && b == 1 && c == 1 || b == c) {break;};
        printf("%d    %d    %d\n", a, b, c);
        //       }
      }
    }
  }
  return 0;
}
