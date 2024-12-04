// Kazi Rifat Morshed 230220
/*
96B. Lucky Numbers (easy)

Petya loves lucky numbers. Everybody knows that positive integers are lucky if
their decimal representation doesn't contain digits other than 4 and 7. For
example, numbers 477444 are lucky and 517467 are not.

Lucky number is super lucky if it's decimal representation contains equal amount
of digits 4 and 7. For example, numbers 477744, 474477 are super lucky
and 4744467 are not.

One day Petya came across a positive integer n. Help him to find the "least
super lucky" number which is not less than n.

Input
The only line contains a positive integer n (1 ≤ n ≤ 10^9). This number doesn't
have leading zeroes.

Output
the least super lucky number that is more than or equal to n.
*/

#include <stdio.h>
#define true 1
#define false 0

int LuckyTester(unsigned long num) {
  int four_count = 0, seven_count = 0, input_width = 0;

  while (num) {
    unsigned long digit = num % 10;
    if (digit == 4) {
      four_count++;
    }
    if (digit == 7) {
      seven_count++;
    }
    num /= 10;
    input_width++;
  }

  if ((four_count == seven_count) &&
      (four_count + seven_count == input_width)) {
    return true;
  } else {
    return false;
  }
  //
}

int main(void) {
  unsigned long number = 0;
  scanf("%lu", &number);

  while (1) {
    if (((number % 10 == 4) || (number % 10 == 7)) &&
        (LuckyTester(number) == true)) {
      break;
    }
    number++;
  }

  printf("%lu", number);
  // EOF
}