#include "stdio.h"
// bubble sorting
void sorting(int n, int *p) {
  int temp = 0;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) { // important line
      if (*(p + i) > *(p + j)) {  // important line boro to choto
        // if (*(p + j) < *(p + i)) { // important line choto to boro
        temp = *(p + i);
        *(p + i) = *(p + j);
        *(p + j) = temp;
      }
    }
  }
}

int main(void) {
  int n = 5, arr[5] = {23, 51, 7, 30, 12};
  int *p = &arr[0];
  sorting(n, p);
  for (int l = 0; l < n; l++) {
    printf("%d ", arr[l]);
  }
} // Working
  // Yahoo // Done