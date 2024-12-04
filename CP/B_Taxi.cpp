#include <cstdio>
#include <iostream>
int main(void) {
  unsigned int one = 0, two = 0, three = 0, four = 0, count = 0, n = 0;
  std::cin >> n;

  for (unsigned int i = 0; i < n; i++) {
    unsigned int temp = 0;
    std::cin >> temp;
    if (temp == 1) {
      one++;
    } else if (temp == 2) {
      two++;
    } else if (temp == 3) {
      three++;
    } else if (temp == 4) {
      four++;
    }
  }

  /*4-0*/
  count += four, four = 0;

  /*3-1*/
  while (three && one) {
    count++;
    three--;
    one--;
  }

  /*2-2*/
  while (two >= 2) {
    count++;
    two -= 2;
  }

  /*2-1; 4*/
  while (two && one >= 2) {
    count++;
    two--;
    one -= 2;
  }
  /*2-1; 3*/
  while (two && one) {
    count++;
    two--;
    one--;
  }
  /*1-1*/
  count += (one / 4);

  one %= 4;
  if (one < 4 && one > 0) { // finally
    count++;
    one = 0;
  }
  //
  count += one + two + three;

  // output
  std::cout << count;
} // done