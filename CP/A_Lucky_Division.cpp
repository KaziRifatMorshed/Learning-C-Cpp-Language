#include "iostream"
using namespace std;
int divider(int num) {
  if ((num % 10 == 4 || num % 10 == 7) && num != 0) {
    if (num >= 10) {
      num /= 10;
    }
    return 1 * divider(num);
  } else {
    return 0;
  }
} //                                INCOMPLETE
int main(void) {
  int num = 0;
  cin >> num;
  cout << divider(num);

  // final result
  // if (num % 4 == 0 || num % 7 == 0 || divider(num) == 1) {
  //  cout << "YES";
  //} else {
  //  cout << "NO";
  //}
}
//=============================================================
/*
SEAM's Submission
#include <stdio.h>
#define yes printf("YES\n")
#define no printf("NO\n")
int length(int n) {
  int len = 0;
  while (n != 0) {
    n /= 10;
    len++;
  }
  return len;
}
int is_lucky(int n) {
  int len = length(n), i, r;
  for (i = 0; i < len; i++) {
    r = n % 10;
    n = n / 10;
    if (r != 4) {
      if (r != 7) {
        return 0;
      }
    }
  }
  return 1;
}
int main() {
  int n, i, lucky = 0;
  scanf("%d", &n);
  for (i = 4; i <= n; i++) {
    if (is_lucky(i) && (n % i == 0)) {
      yes;
      lucky = 1;
      break;
    }
  }
  if (!lucky) {
    no;
  }
  return 0;
}*/