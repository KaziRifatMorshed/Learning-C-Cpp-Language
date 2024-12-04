#include "iostream"
using namespace std;
int main(void) {
  char iamastring[3];
  int count = 1, t = 0;
  char temp;
  cin >> t;
  while (t--) {
    cin >> iamastring;
    if (iamastring[0] == temp) {
      count++;
    }
    temp = iamastring[1];
  }
  cout << count;
} // done