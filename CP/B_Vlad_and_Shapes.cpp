#include <stdio.h>

int main(void) {
  int t = 0;
  scanf("%d", &t);
  while (t--) {
    int flag = 0, n = 0;
    scanf("%d", &n);
    int arr[n][n];

    int p = 0;
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        scanf("%d", &arr[i][j]);
      }
    }
    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        if (arr[i][j] == 1) {
          p++;
        }
      }
    }

    if (p == 4 || p == 9 || p == 16 || p == 25 || p == 36 || p == 49 ||
        p == 64 || p == 81 || p == 100) {
      printf("%dSQUARE\n", p);
    } else {
      printf("%dTRIANGLE\n", p);
    }
    // end loop
  }
}

/*#include <iostream>
using namespace std;

int main(void) {
  int t = 0;
  cin >> t;
  while (t--) {
    int flag = 0, n = 0, count_one = 0;
    cin >> n;
    int arr[n][n];

    for (int i = 0; i < n; i++) {
      for (int j = 0; j < n; j++) {
        cin >> arr[i][j];
        int temp = arr[i][j];
        if (temp == 1) {
          count_one++;
        }
      }
    }

    if (count_one == 4 || count_one == 9 || count_one == 16 ||
        count_one == 25 || count_one == 36 || count_one == 49 ||
        count_one == 64 || count_one == 81 || count_one == 100) {
      cout << "SQUARE\n";
    } else {
      cout << "TRIANGLE\n";
    }
    // end loop
  }
}
*/