/*Problem 11:
Suppose you are given an array of integers in an arbitrary order. Write a
recursive solution to find the maximum element from the array.
Input:
5
7 4 9 6 2
Output:
9*/
#include <stdio.h>
int max_max(int *arr, int max) {
  if (*arr == 0) {
    return max;
  }
  if (max < *arr) {
    max = *arr;
  }
  return max_max((arr + 1), max);
}

int main(void) {
  int arr[20] = {0};
  for (int i = 0; i < 5; i++) {
    scanf("%d", &arr[i]);
  }
  printf("MAX = %d", max_max(arr, 0));
} // WORKING
  /*
  int Max(int i, int n, int *a)
  {
      int m;
      if(i==n-1) return a[i]; // the last value is the maximum for this step
      m = Max(i+1, n, a);
      return ((a[i] > m)? a[i] : m);
  }
  
  int main()
  {
      int n, i, m, a[100];
      scanf("%d", &n);
      for(i=0; i<n; i++)
          scanf("%d", &a[i]);
      m = Max(0, n, a);
      printf("%d\n", m);
      return 0;
  }*/