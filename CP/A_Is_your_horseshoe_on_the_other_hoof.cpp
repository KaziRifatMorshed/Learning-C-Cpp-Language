#include <algorithm>
#include <cstdio>
#include <iostream>
using namespace std;

int main(void) {
  long long int arr[5];
  for (int i = 0; i <= 4; i++) {
    cin >> arr[i];
  }
  sort(&arr[0], &arr[4]); // GAME CHANGER
  int count = 0;

  for (int i = 0; i <= 4; i++) {
    if (arr[i] == arr[i + 1]) {
      count++;
    }
  }
  cout << count;
} // DONE