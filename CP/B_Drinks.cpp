#include "iostream"
#include "stdio.h"
using namespace std;
int main(void) {
  double arr[102];
  double n = 0, sum = 0;
  // float result = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    scanf("%lf", &arr[i]);
    // cin >> arr[i];
    sum += arr[i];
  }
  // result = sum / n;
  printf("%.12lf", sum / n);
} // done