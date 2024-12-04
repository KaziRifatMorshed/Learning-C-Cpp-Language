#include <stdio.h>
#include <string.h>
#include <sys/types.h>

/*
// কাজ করে না ঠিকভাবে, জিরো এর আউটপুট জিরো আসে
int count_zeros_ones(char *binary_string) {
  int num_zeros = 0;
  int num_ones = 0;
  for (int i = 0; i < strlen(binary_string); i++) {
    if (binary_string[i] == '0') {
      num_zeros++;
    } else if (binary_string[i] == '1') {
      num_ones++;
    } else {
      printf("Invalid binary string: %s\n", binary_string);
      return -1;
    }
  }
  return num_zeros, num_ones;
}
// barkaifakuuuuuuuu
int main() {
  char binary_string[100];
  printf("Enter a binary string: ");
  scanf("%s", binary_string);

  int num_zeros, num_ones;
  num_zeros, num_ones = count_zeros_ones(binary_string);

  if (num_zeros != -1) {
    printf("Number of zeros: %d\n", num_zeros);
    printf("Number of ones: %d\n", num_ones);
  }

  return 0;
}
*/

void main(void) {
  int i = 0, zero = 0, one = 0;
  char input[100];
  printf("input binary string; ");
  scanf("%s", &input);
  for (i = 0; i < strlen(input); i++) {
    if (input[i] == '1') {
      one++;
    } else if (input[i] == '0') {
      zero++;
    }
  }
  printf("zero = %d, one = %d", zero, one);
}