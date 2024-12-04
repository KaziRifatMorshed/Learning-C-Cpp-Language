// Kazi Rifat Morshed 230220
// 2
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int palindrome(int n) {
  int result = 0;
  while (n != 0) {
    int temp = n % 10;
    result = result * 10 + temp;
    n /= 10;
  }
  return result;
} // function works after testing

int isLeapYar(int year) {
  // if ((year % 4 == 0) && ((year % 400 == 0) || (year % 100 != 0))) {
  if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) {
    return true;
  }
  return false;
} // hopefully, logic is correct // function works after testing

int _checker(int f_date, int f_month, int f_year, int e_date, int e_month,
             int e_year) {
  int left = 0, right = 0, count = 0;

  // loop for rounding year
  for (int year = f_year; year <= e_year; year++) {

    int loop_starting_month = 0;
    if (year == f_year) {
      loop_starting_month = f_month;
    } else {
      loop_starting_month = 1;
    }

    // loop for rounding month
    for (int month = loop_starting_month; month <= 12; month++) {

      // condition for determining date number of a month
      int date_length = 0;
      if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 ||
          month == 10 || month == 12) {
        date_length = 31;
      } else if (month == 2 && isLeapYar(year) == true) {
        date_length = 29;
      } else if (month == 2 && isLeapYar(year) == false) {
        date_length = 28;
      } else {
        date_length = 30;
      }

      int loop_starting_date = 0;
      if (year == f_year && month == f_month) {
        loop_starting_date = f_date;
      } else {
        loop_starting_date = 1;
      }

      // loop for checking each dates
      for (int date = loop_starting_date; date <= date_length; date++) {

        // I will divide a 8 digit date into two part and check them
        left = date * 100 + month;
        right = palindrome(year); // reversing the 4 digit 'year'
        if (left == right) {      // MAIN LOGIC
          count++;
          if (date == e_date && month == e_month &&
              year == e_year) { // termination condition
            return count;
          }
        }
      }
    }
  }
  return count;
}

int main(void) {
  char input_line[25] = {0};
  scanf(" %[^\n]", input_line);
  // getting one string as input and collecting data from it
  // gets(input_line);
  int count = 0, left = 0, right = 0;

  // strings containing those dates only and
  // will apply atoi() library function later
  char first_date[3], first_month[3], first_year[5];
  char end_date[3], end_month[3], end_year[5];

  // converting
  first_date[0] = input_line[0];
  first_date[1] = input_line[1];
  first_month[0] = input_line[3];
  first_month[1] = input_line[4];
  first_year[0] = input_line[6];
  first_year[1] = input_line[7];
  first_year[2] = input_line[8];
  first_year[3] = input_line[9];
  // assuming that, there is only one space between two inputted dates
  // so, skipping input_line[10]
  end_date[0] = input_line[11];
  end_date[1] = input_line[12];
  end_month[0] = input_line[14];
  end_month[1] = input_line[15];
  end_year[0] = input_line[17];
  end_year[1] = input_line[18];
  end_year[2] = input_line[19];
  end_year[3] = input_line[20];

  // converting those strings into INT for mathematical calculations
  int f_date = atoi(first_date), f_month = atoi(first_month),
      f_year = atoi(first_year), e_date = atoi(end_date),
      e_month = atoi(end_month), e_year = atoi(end_year);
  // note: f_date = first date and e_date = end date

  count = _checker(f_date, f_month, f_year, e_date, e_month, e_year);
  printf("%d", count);
  // end
} // ALL 3 test case PASSED, HURRAY !!!
  // completed at 07:10 PM