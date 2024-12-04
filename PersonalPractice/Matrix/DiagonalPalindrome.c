#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0
#define width 4
#define height 4

int is_Palindrome(int *arr, int len) { // (int *arr, int len)
  for (int i = 0; i < (len / 2); ++i) {
    if (arr[i] != arr[len - 1 - i]) {
      return false;
    }
  }
  return true;
}

int main(void) {
  int arr[4][4] = {{1, 2, 2, 1},   //
                   {1, 3, 10, 10}, //
                   {1, 2, 3, 10},  //
                   {1, 3, 3, 1}};  //
  int new_arr[16] = {0};

  // EOF
} // INCOMPLETE