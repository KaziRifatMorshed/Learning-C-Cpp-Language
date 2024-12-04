#include <stdio.h>

#define MAX 4
int main(void) {
  // int af8af9caf8acu = 0; // this name is allowed
  for (int row = 1; row <= MAX; row++) {
    for (int i = 1; i <= MAX - row; i++) {
      printf(" ");
    }
    for (int i = 1; i <= row; i++) {
      printf("*");
    }
    printf("\n");
  }
} // done

//   *
//  **
// ***
//****