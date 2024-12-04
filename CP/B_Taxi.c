#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  float sum = 0, n = 0, temp = 0;
  scanf("%f", &n);
  getchar();
  for (int i = 0; i < (int)n; i++) {
    scanf("%f", &temp);
    sum += temp;
  }
  double p = sum / n;
  if ((int)sum % (int)n) {
    p++;
  }
  printf("%d", (int)ceil(p));
  // eof
} // failed