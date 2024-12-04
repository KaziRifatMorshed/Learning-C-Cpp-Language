#include <stdio.h>
int main(void) {
  int divisor_count = 0, target = 0;
  scanf("%d", &target);

  for (int i = 0; i * i <= target; i++) {
    if (i * i == target) {
      divisor_count++;
    } else if (target % i == 0) {
      divisor_count += 2;
    }
  }
}