#include <stdio.h>

void calculate(int *first_address_of_arr, int *max, int *min, float *avg) {
  // finding HIGHEST
  for (int i = 0; i < 10; i++) {
    if (*(first_address_of_arr + i) > *max) {
      *max = *(first_address_of_arr + i);
    }
  }
  // finding LOWEST
  for (int i = 0; i < 10; i++) {
    if (*(first_address_of_arr + i) < *min) {
      *min = *(first_address_of_arr + i);
    }
  }
  // finding AVG
  int sum = 0;
  for (int i = 0; i < 10; i++) {
    sum = sum + *(first_address_of_arr + i);
  }
  *avg = (float)sum / 10; // CAREFUL // DON'T FORGET TYPE-CASTING
}

int main(void) {
  int arr[1000];
  int high = 0;
  float avg = 0; // CAREFUL, average may contain digits after point
  // input numbers
  for (int i = 0; i < 10; i++) {
    scanf("%d", &arr[i]); // CAREFUL, do not use any space with %d
  }
  int low = arr[0];
  calculate(arr, &high, &low, &avg);

  printf("high = %d, low = %d, avg = %g", high, low, avg);
  /* Here, in line 36, we could have used %f to print floating number,
    using %g format specifier will be a good option as it will
    print the
*/
}