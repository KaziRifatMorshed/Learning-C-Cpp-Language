#include <stdio.h>

int countNum(int num, int count) {
  if (num == 0) {
    return count;
  }
  return countNum(num / 10, count + 1);
}

int main(void) {
  int num = 4516;

  int t = 0;

  t = countNum(num, 0);
  printf("%d", t);
} // DONE