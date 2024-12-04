// [HARD] Write a function that receives a sorted array of integers and an
// integer value, and inserts the value in its correct place.[LO 12.5, 12.6 H]

#include <stdio.h>
// intentionally used BUBBLE SHORTING which may be kinda difficult to
// understand firstly
int size_of_arr(int *first_element) {
  int i;
  for (i = 0; *(first_element + i) != '\0'; i++) {
  }
  return i; // working
}

void bubble_shorter(int *arr, int *len) {
  (*len)++; // we have added a new number and making a space for the newcomer
  for (int i = 0; i < *len; i++) {
    for (int j = i + 1; j < *len; j++) {
      if (*(arr + j) < *(arr + i)) {
        int t = *(arr + i);
        *(arr + i) = *(arr + j);
        *(arr + j) = t;
      }
    }
  }
}

int main(void) {
  // input as you like in source code
  int arr[100] = {2, 4, 5, 8, 9, 10, 11, 13, 14, 17};
  int len = size_of_arr(&arr[0]);
  scanf("%d", (arr + len)); // careful &*(arr + len) === (arr + len)
  bubble_shorter(&arr[0], &len);

  for (int i = 0; i < len; i++) { // print array
    printf("%d ", arr[i]);
  }
}
// done