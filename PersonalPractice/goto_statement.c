#include "stdio.h"

// printf("");
// scanf("%",&);
int main() {
  int a, b, c;
  //	int sides = 10 ;

  test:
    {printf("\njust after test");}

  switch (scanf("%d%d%d", &a, &b, &c)) {
    {
    case 3: {
      printf("\ntriangle");
      // break;
      goto test;
    }
    case 5: {
      printf("\npentagon");
      break;
    }
    default: {
      printf("\nmore thand 6");
    }
    }

    // printf("");
    // scanf("%",&);
  }
  return 0;
}