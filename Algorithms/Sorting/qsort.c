#include "stdio.h"
#include "stdlib.h"

int compare(const void *a, const void *b) { return *(int *)a - *(int *)b; }

int main() {
  //   int a = 122, *p;
  //   int arr[50];
  //   char str[50];

  //   p = &a;

  //   printf("a = %d\n", p);

  int arr[10] = {16, 15, 6844, 561, 645, 35, 65, 654, 23, 5};

  // for (int i = 0; i < 10; i++) {
  //   scanf("%d", &arr[i]);
  // }

  qsort(arr, 10, sizeof(int), compare);

  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }

  return 0;
}