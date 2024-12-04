// #include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

void gnomesort(int n, int ar[][2]) {
  int i = 0;
  while (i < n) {
    if (i == 0 || ar[i - 1][0] <= ar[i][0]) {
      i++;
    } else {
      int tmp = ar[i][0];
      ar[i][0] = ar[i - 1][0];
      ar[--i][0] = tmp;
    }
  }
}

int main(void) {
  int t = 0;
  scanf("%d", &t);
  getchar();
  while (t--) {
    int n = 0;
    int arr[200001][2] = {0};
    scanf("%d", &n);
    // getchar();
    for (int i = 1; i <= n; i++) {
      scanf("%d", &arr[i][0]);
      arr[i][1] = i;
    }
    gnomesort(n + 1, arr);
    int min = arr[1][0];

    for (int i = 1; i <= n; i++) {
      // if (arr[i][0] == min) {
      //   continue;
      // } else
      if (arr[i][0] < arr[i + 1][0]) {
        printf("%d\n", arr[i][1]);
      }
    }
  }
  // eof
} // pending