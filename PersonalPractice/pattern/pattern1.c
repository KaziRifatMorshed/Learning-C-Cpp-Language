#include "stdio.h"
//   1  // Pyramid
//  12  // Pyramid
//  123 // Pyramid
//  1234 // Pyramid
//  12345 // Pyramid
int main(void) {
  int n = 0, i, j;
  printf("n=");
  scanf("%d", &n);

  for (i = 1; i <= n; i++) {

        for (j=0 ; j <= n - i; j++) {
        printf(" ");
        }

        for (j=1; j<=i; j++) {
            printf("%d ",j);
        }
        printf("\n");
  }
}
