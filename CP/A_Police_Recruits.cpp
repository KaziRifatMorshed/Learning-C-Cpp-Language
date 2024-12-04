#include <iostream>
using namespace std;
int main(void) {
  short int events[100002];
  int n = 0, police = 0, crime = 0;
  // input number of events
  cin >> n;

  // input events and testing together
  for (int i = 0; i < n; i++) {
    cin >> events[i];

    if (events[i] > 0) { // hire police
      police += events[i];
    }
    if (events[i] < 0 && police > 0) {
      police += events[i];
    } else if (events[i] < 0 && police < 1) {
      crime += events[i];
    }
  }

  cout << abs(crime);
} // done