#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

void PrintData() {}

int main(void) {

  // scanf("%d", &);
  // printf(" ");

  typedef struct {
    int x;
    int y;
  } VecTor;

  VecTor a, b, c, *ptr1, *ptr2;
  ptr1 = &a;
  printf("print a.x <space> a.y : ");
  scanf("%d", &a.x);
  PrintData(ptr1);
}