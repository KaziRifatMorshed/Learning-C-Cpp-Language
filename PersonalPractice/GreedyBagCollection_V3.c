// 5 5 1 1 10 10 2 10 5 1 10 2 10 5 5 10 2 2 1 1 10 2 5 2 5 1 10 1 2 10
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[100] = {0};
  int count[101] = {0};
  int max = 0, n = 0, pick_limitation = 0;
  scanf("%d %d", &n, &pick_limitation);
  // taking input
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    arr[i] = temp;
    count[temp]++;
    // if (temp > max) {
    //   max = temp;
    // }
  }
  int sum = 0, num_of_coins_picked = 0;
  for (int value_of_coin = 100; value_of_coin > 0;
       value_of_coin--) { // i is value of the coin
    if (count[value_of_coin] > 0) {
      sum += value_of_coin * count[value_of_coin];
      num_of_coins_picked += count[value_of_coin];
    }
    if (num_of_coins_picked > pick_limitation) {
      sum -= (num_of_coins_picked - pick_limitation) * value_of_coin;
      break;
    }
  }

  printf("num_of_coins_picked = %d and sum = %d", num_of_coins_picked, sum);
  // end
}

// 5 1 1 2 5 1 2 5 5 2 2 1 1  2 5 2 5 1 1 2