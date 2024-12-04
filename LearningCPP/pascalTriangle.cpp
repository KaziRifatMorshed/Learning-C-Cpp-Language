#include <math.h>
#include <stdio.h>

int fact(int x) {
  int factorial = 1;
  if (x <= 0) {
    return 1;
  }
  for (int i = 1; i <= x; i++) {
    factorial *= i;
  }
  return factorial;
}

int combi(int a, int b) {
  int p = fact(a);
  int q = fact(a - b);
  int r = fact(b);
  return p / (q * r);
}

int main() {
  int lines = 0, i = 0, j = 0;

  printf("Enter Number Of lines of Pascle Triangle = ");
  scanf("%d", &lines);

  for (i = 1; i <= lines; i++) {
    for (j = lines; j > i; j--) {
      printf(" ");
    }
    for (j = 0; j <= i - 1; j++) {
      printf("%d ", combi(i - 1, j));
    }
    for (j = lines; j > i; j--) {
      printf(" ");
    }

    printf("\n\n");
  }
  return 0;
}
