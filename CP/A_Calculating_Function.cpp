#include "iostream"

using namespace std;
int main(void) {
  long long int n = 0;
  cin >> n;

  if (n % 2 == 0) {
    cout << n / 2;
  } else {
    cout << (n / 2) - n;
  }
} // done
  //
  //
  //
  //
  //
  //
  //  time limit excluded

/*
#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    long long n, a;
    cin >> n;
    if(n % 2 == 0) a = n / 2;
    else a = ((n + 1) / 2) * (-1);
    cout << a << endl;
    return 0;
}*/