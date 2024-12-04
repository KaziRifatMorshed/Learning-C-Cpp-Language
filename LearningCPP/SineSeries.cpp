#include <math.h>
#include <stdio.h>

int factorial(int x) {
  int factorial = 1;
  if (x <= 0) {
    return 1;
  }
  for (int i = 1; i <= x; i++) {
    factorial *= i;
  }
  return factorial;
}

int main() {
  // To evaluate Sine Series
  double sum = 0, x = 0;
  int n;
  int deno = 1;
  n = 10;

  printf("Enter The Value Of x = ");
  scanf("%lf", &x);

  for (int i = 1; i <= n; deno = deno + 2, i++) {

    double fact = (double)factorial(deno);

    if (i % 2 != 0) { // i is odd
      sum += (double)((double)pow(x, deno) / fact);
    } else { // i is even
      sum -= (double)((double)pow(x, deno) / fact);
    }
    printf("%d. The sum = %lf\n", i, sum);
  }
  printf("FINAL The sum = %lf\n", sum);

  return 0;
}