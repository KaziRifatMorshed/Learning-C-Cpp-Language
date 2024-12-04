#include "stdio.h" // Difficult lagse
//  12345
//   1234
//    123
//     12
//      1
void main() {
  int n = 0, row, col;
  printf("n=");
  scanf("%d", &n);

  for (row = n; row >= 0; row--) // totally different here
  // Reminder: row এর ভ্যালু বার বার কমছে, বাড়ছে না কিন্তু 
    {
    for (col = 1; col <= n - row; col++) {
      printf(" ");
    }
    for (col = 1; col <= row ; col++) {
      printf("%d",col); // careful, here is a space after this line and %2d here
    }
    printf("\n");
  }
}