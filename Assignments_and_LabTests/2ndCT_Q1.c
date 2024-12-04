#include <stdio.h>

void swap(int *a, int *b) { // swap function credit goes to seam
  int temp = *a;
  *a = *b;
  *b = temp;
}

void rearrange(int *a, int *b, int *c) {
  if (*a > *b) {
    swap(a, c);
  }
  if (*b > *c) {
    swap(b, c);
  }
  if (*a > *b) {
    swap(a, b);
  }
}

int main(void) {
  int a = 0, b = 0, c = 0;
  scanf("%d %d %d", &a, &b, &c);
  rearrange(&a, &b, &c);
  // printf("%d %d %d", a, b, c);
} // done