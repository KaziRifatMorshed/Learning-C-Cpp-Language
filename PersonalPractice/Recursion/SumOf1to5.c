#include <stdio.h>
int sum_it(int num, int limit) {
  if (num > limit) {
    printf("= ");
    return 0;
    // return ;  // the result comes 21 (15 + 6 = 21)
  } else {
    printf("%d ", num);
    if (num != limit) {
      printf("+ ");
    }
    return num + sum_it(num + 1, limit);
    // num++ -> terminated by signal SIGSEGV (Address boundary error)
    // ++num -> output = 20
  }
}
int main(void) {
  int limit = 0;
  scanf("%d", &limit);
  int sum = sum_it(1, limit);
  printf("%d", sum);
} // done