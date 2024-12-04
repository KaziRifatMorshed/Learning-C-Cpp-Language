#include "iostream"
using namespace std;
int main(void) {
  int t = 0, H = 0;
  int arr[101];
  cin >> t;
  for (int i = 0; i <= t; i++) {
    cin >> arr[i];
    if (arr[i] == 1) {
      H = 1;
    }
  }
  if (H == 1) {
    cout << "HARD";
  } else {
    cout << "EASY";
  }
} // DONE