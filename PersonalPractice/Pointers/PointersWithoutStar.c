#include "stdio.h"

void f1(int *p1, int *p2);
void f2(int *p1, int *p2);

int main() {
  int a = 10, b = 20;
  f2(&a, &b);
  printf("%d %d\n", a, b);
  f1(&a, &b);
  printf("%d %d\n", a, b);
  return 0;
}

void f1(int *p1, int *p2) {
  *p1 = *p1 + 12;
  *p2 = *p2 + 13;
}
void f2(int *p1, int *p2) {
  p1 = p1 + 12;
  p2 = p2 + 13;
  //  these p1 and p2 will be vanished now
}
/*
10 20
22 33*/
// DONE
// `f2` doesn't change the values