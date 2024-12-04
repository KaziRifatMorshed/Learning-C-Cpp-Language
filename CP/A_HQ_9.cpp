#include <iostream>
using namespace std;
int main(void) {
  bool temp = false;
  char c;
  printf("Enter a string: ");
  while (scanf("%c",&c) && c != '\n') { // super efficient way
    if (c == 'H' || c == 'Q' || c == '9') {
      temp = true;
    }
  }
  if (temp == true) {
    cout << "YES";
  } else {
    cout << "NO";
  }
} // done