#include "stdio.h"
#include "stdlib.h"

int main() {
  int *arr;

  printf("Enter array size: ");
  scanf("%d", &n);

  arr = (int *)malloc(sizeof(int) * n);

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  printf("\n\n");

  for (int i = 0; i < n; i++) {
    printf("%d ", &arr[i]);
  }

  free(arr);

  return 0;
}