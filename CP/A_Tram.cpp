#include <iostream>
using namespace std;

int main(void) {
  int max = 0, sum = 0, a = 0, b = 0;
  int num_of_stopage = 0;
  cin >> num_of_stopage;
  while (num_of_stopage--) {
    cin >> a >> b;
    sum += b - a;
    if (max < sum) {
      max = sum;
    }
  }
  cout << max;
} // DONE