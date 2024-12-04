#include <stdio.h>
int main(void) {
  int ten_count = 20, five_count = 10, two_count = 100, one_count = 50;
  int sum = 0, coin_count = 0;
  //  while (coin_count <= 50 && ten_count > 0) { // NOT <=
  while (coin_count < 50 && ten_count > 0) {
    ten_count--;
    sum += 10;
    coin_count++;
  }
  while (coin_count < 50 && five_count > 0) {
    five_count--;
    sum += 5;
    coin_count++;
  }
  while (coin_count < 50 && two_count > 0) {
    two_count--;
    sum += 2;
    coin_count++;
  }
  while (coin_count < 50 && one_count > 0) {
    one_count--;
    sum += 1;
    coin_count++;
  }
  printf("count = %d and sum = %d", coin_count, sum);
} // DONE