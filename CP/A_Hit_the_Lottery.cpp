#include <iostream>
using namespace std;
int main(void) {
  unsigned long long int n = 0;
  int cnt = 0;
  cin >> n;
  int arr[5] = {100, 20, 10, 5, 1};

  for (int i = 0; i < 5; i++) { // Help from GitHub solution
    cnt += (n / arr[i]);
    n = n % arr[i];
  }

  cout << cnt;
} // done

/* MY THINKING
while (n != 0) { for some reason, not working !
    if (n > 100) {
      n -= 100;
      cnt++;
    } else if (n > 20) {
      n -= 20;
      cnt++;
    } else if (n > 10) {
      n -= 10;
      cnt++;
    } else if (n > 5) {
      n -= 5;
      cnt++;
    } else if (n > 1) {
      n -= 1;
      cnt++;
    }
  }*/

/*SEAM's Submission
 #include <stdio.h>
int main(){
 int n, count = 0;

 scanf("%d", &n);

 count += n / 100;
 n = n - (n / 100) * 100;

 count += n / 20;
 n = n - (n / 20) * 20;

 count += n / 10;
 n = n - (n / 10) * 10;

 count += n / 5;
 n = n - (n / 5) * 5;

 count += n;

 printf("%d", count);

 return 0;
}*/