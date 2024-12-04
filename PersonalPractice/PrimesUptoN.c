#include <stdio.h>

int primetester(int num) {
  int count = 0;

  for (int i = 2; i < num; i++) {
    if (num % i == 0) {
      count++;
      break;
    }
  }

  if (count > 0) { // IF  NOT prime
    return 0;
  } else { // if prime
    return 1;
  }
}

int main(void) {
  int n = 0;
  // bool isprimeornot[1000] = {0};
  scanf("%d", &n);

  for (int i = 1; i <= n; i++) {
    // if (i == 1 || i == 2) {
    //   printf("%d ROCKS\n", i);
    // } else if (primetester(i) == 1) {
    if (primetester(i) == 1) {
      printf("%d is prime\n", i);
    } else {
      printf("%d is NOT prime\n", i);
    }
  }
}