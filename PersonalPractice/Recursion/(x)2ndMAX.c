/*Problem 12:
Write a recursive solution to find the second maximum number from a given set of
integers.
Input:
5
5 8 7 9 3
Output:
8 */

#include <stdio.h>
int second_max(int *arr, int max) {
  if (*arr == 0) {
    return max;
  }
  if (max < *arr) {
    max = *arr;
  }
  return second_max((arr + 1), max);
} // HARD

int main(void) {
  int arr[10] = {0};
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  printf("second_MAX = %d", second_max(arr, 0));
} // INCOMPLETE

/*
void SMax(int i, int n, int *a, int *fbest, int *sbest)
{
    if(i==n-1)
    {
        *fbest = a[i];
        return;
    }
    // the following if() is a trick
    // to avoid ambiguity
    if(*sbest < a[i]) *sbest = a[i];
    SMax(i+1, n, a, fbest, sbest);
    if(a[i] > *fbest)
    {
        *sbest = *fbest;
        *fbest = a[i];
    }
    else if(a[i] > *sbest) *sbest = a[i];
}

int main()
{
    int n, i, a[100];
    int fbest, sbest;
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%d", &a[i]);
    sbest = fbest = a[0];
    SMax(0, n, a, &fbest, &sbest);
    // fbest = first best
    // sbest = second best
    // will be updated via reference
    // as we will not use global variables
    printf("%d\n", sbest);
    return 0;
}
*/