#include <cmath>
#include <iostream>
#include <math.h>
using namespace std;
int main(void) {
  int a = 0, b = 0, count = 0;
  cin >> a >> b;

  while (1) {
    count++;
    if ((a * pow(3, count)) > (b * pow(2, count))) {
      break;
    }
  }
  cout << count;
}