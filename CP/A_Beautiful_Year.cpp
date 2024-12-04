/*
//4022146   Jul 4, 2013 8:34:23 PM	fuwutu	 271A - Beautiful Year
GNU C++0x	Accepted	15 ms	0 KB 
int main()
{
    int y;
    cin >> y;
    while (true)
    {
        y += 1;
        int a = y / 1000;
        int b = y / 100 % 10;
        int c = y / 10 % 10;
        int d = y % 10;
        if (a != b && a != c && a != d && b != c && b != d && c != d)
        {
            break;
        }
    }
    cout << y << endl;
    return 0;
}*/

#include "iostream"
#include <cstdio>
using namespace std;

void number_collector(int *arr_of_digits, int input_num) {
  for (int i = 0; i < 4; i++) {
    *(arr_of_digits + i) = input_num % 10;
    input_num /= 10;
  }
}

int tester(int *arr_of_digits) {
  if ((*(arr_of_digits + 0) != *(arr_of_digits + 1)) &&
      (*(arr_of_digits + 0) != *(arr_of_digits + 2)) &&
      (*(arr_of_digits + 0) != *(arr_of_digits + 3)) &&
      (*(arr_of_digits + 1) != *(arr_of_digits + 2)) &&
      (*(arr_of_digits + 1) != *(arr_of_digits + 3)) &&
      (*(arr_of_digits + 2) != *(arr_of_digits + 3))) {
    return 1; // when they are different, it is true
  }
  return 0;
}

int main(void) {
  int input_num = 0;
  cin >> input_num;
  input_num++;
  int arr_of_digits[4];

  for (input_num; 1; input_num++) {
    number_collector(arr_of_digits, input_num);
    if (tester(arr_of_digits) == 1) {
      cout << input_num;
      break;
    }
  }
} // done