/*Write a recursive function to print an array in the following order. [0] [n-1]
[1] [n-2] ......... ......... [(n-1)/2] [n/2]
Input:
5
1 5 7 8 9
Output:
1 9
5 8
7 7
/////
void print(int i, int j, int *a) // amazing idea
{
    if(i<=j) // amazing idea
    {
        printf("%d %d\n", a[i], a[j]);
        print(i+1, j-1, a); // call and increment or decrement here
    }
}
*/
#include <stdio.h>
void PrintIt(int *arr, int len, int n) { // less efficient algorithm
  if (n > len / 2) {
    return;
  }
  printf("%d %d\n", *(arr + n), *(arr + len - 1 - n)); // careful minus one
  PrintIt(arr, len, n + 1);
}

int main(void) {
  int arr[] = {1, 5, 7, 8, 9};
  int len = sizeof(arr) / sizeof(arr[0]);

  PrintIt(arr, len, 0);
} // done