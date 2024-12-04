/*
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  int t = 0;
  scanf("%d", &t);

  while (t--) {
    int map[52] = {0};
    int arr_len = 0, dictinct_count = 0, non_disctint = 0;
    int temp = 0;

    // getting input
    scanf("%d", &arr_len);

    for (int i = 1; i <= arr_len; i++) {
      scanf("%d", &temp);
      map[temp]++;
    }

    // searching
    for (int i = 1; i <= arr_len; i++) {
      if (map[i] > 0) {
        dictinct_count++;
      }
    }

    non_disctint = arr_len - dictinct_count;
    int result = dictinct_count + (non_disctint % 2);
    printf("%d\n", result);
  }

  // EOF
  return 0;
}*/

///*
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef unsigned long long int ulli;

#define true 1
#define false 0

int main(void) {
  int t = 0;
  scanf("%d", &t);
  getchar();
  while (t--) {
    int map[51] = {0};
    int arr_len = 0, dictinct_count = 0, non_disctint = 0;
    int temp = 0;
    // getting input
    scanf("%d", &arr_len);
    getchar();
    for (int i = 0; i < arr_len; i++) {
      // int temp = 0;
      scanf("%d", &temp);
      map[temp]++;
    }
    // searching
    for (int i = 1; i <= arr_len; i++) {
      if (map[i] > 0) {
        dictinct_count++;
      }
    }
    non_disctint = arr_len - dictinct_count;
    int result = 0;
    result = dictinct_count + (non_disctint % 2);
    printf("%d\n", result);
  }
  // EOF
}

//*/