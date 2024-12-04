#include <iostream>
using namespace std;
int main(void) {
  int countLuckyNum = 0;
  char input[1000] = {0};
  cin >> input;
  for (int i = 0; input[i] != '\0'; i++) {
    if (input[i] == '4' || input[i] == '7') {
      countLuckyNum++;
    }
  }
  if (countLuckyNum == 7 || countLuckyNum == 4) {
    cout << "YES";

  } else {
    cout << "NO";
  }
}