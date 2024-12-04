#include <stdio.h>

int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int flag = 0, n = 0;
    scanf("%d", &n);
    int arr[10][10];

    int count_one = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &arr[i][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (arr[i][j] == 1) {
          count_one++;
        }
      }
    }

    if (count_one == 4 || count_one == 9 || count_one == 16 ||
        count_one == 25 || count_one == 36 || count_one == 49 ||
        count_one == 64 || count_one == 81 || count_one == 100) {
      printf("%dSQUARE\n", count_one);
    } else {
      printf("%dTRIANGLE\n", count_one);
    }
    // end loop
  }
}
