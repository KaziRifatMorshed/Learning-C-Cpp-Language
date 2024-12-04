// #include <cinttypes>
#include <math.h>
#include <stdio.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  // making shive
  ulli arr[450] = {0};
  for (int i = 1; i < 450; ++i) {
    arr[i] = i * i;
  }
  int t = 0;
  scanf("%d", &t);
  getchar(); // DUMMY
  while (t--) {
    ulli sum = 0, element_num = 0;
    scanf("%llu", &element_num);
    for (ulli i = 0; i < element_num; ++i) {
      ulli temp = 0;
      scanf("%llu", &temp);
      sum += temp;
    }
    ulli sq = (ulli)sqrtl(sum); // key point
    if (sq * sq == sum) {       // key point
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  // EOF
} // done