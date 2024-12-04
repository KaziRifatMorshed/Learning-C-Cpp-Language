#include "stdio.h" // Difficult lagse

// Black Widow

void main() {
  int n = 0, row, col;
  printf("n = ");
  scanf("%d", &n);
  printf("\n");

  for (row = n; row >= 1; row--) { // I had row >= 0 which was making a fuss
    for (col = 1; col <= n - row; col++) { // col <= n - row
      printf("  ");
    }
    for (col = 1; col <= row; col++) {
      printf("%d ", col % 2);
    }
    // if(row == 0){break;}
    printf("\n");
  }
  // Second Half below
  for (row = 2; row <= n; row++) {
    for (col = 1; col <= n - row; col++) {
      printf("  ");
    }
    for (col = 1; col <= row; col++) {
      printf("%c ", col + 64);
    }
    printf("\n");
  }
}

//=====================================================

// thanks to seam vai
/*
#include <stdio.h>

int main() {
  int i, j, k, n;

  printf("n = ");
  scanf("%d", &n);

  // First Half
  for (i = 0; i < n - 1; i++) {
    for (j = 0; j < i; j++) {
      printf("  ");
    }

    for (k = 0; k < n - i; k++) {
      printf("%d ", (k + 1) % 2);
    }

    if (i == n - 1) {
      break;
    }

    printf("\n");
  }

  // Second Half
  for (i = 0; i < n; i++) {
    for (j = 0; j < n - i - 1; j++) {
      printf("  ");
    }

    for (k = 0; k <= i; k++) {
      printf("%d ", (k + 1) % 2);
    }

    printf("\n");
  }

  return 0;
}
*/