// 5 5 1 1 10 10 2 10 5 1 10 2 10 5 5 10 2 2 1 1 10 2 5 2 5 1 10 1 2 10
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int arr[100] = {0};
  int count[101] = {0};
  int max = 0, n = 0;
  scanf("%d", &n);
  // taking input
  for (int i = 0; i < n; i++) {
    int temp;
    scanf("%d", &temp);
    arr[i] = temp;
    count[temp]++;
    if (temp > max) {
      max = temp;
    }
  }
  int sum = 0, num_of_coins_picked = 0;
  for (int i = 100; i > 0; i--) {
    // যে এরে তে কাউন্ট স্টোর করেছি সেটার পিছন থেকে সামনে আসবে
    // if (count[i] > 0) {
    while (count[i] > 0 && num_of_coins_picked < 15) {
      sum += i;
      count[i]--;
      num_of_coins_picked++;
    }
    //}
  }
  printf("num_of_coins_picked = %d and sum = %d", num_of_coins_picked, sum);
  // end
}

// 5 1 1 2 5 1 2 5 5 2 2 1 1  2 5 2 5 1 1 2