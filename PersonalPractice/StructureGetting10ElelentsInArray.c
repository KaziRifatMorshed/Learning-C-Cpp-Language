/* MM Sir Sample Ques
1. Getting 10 elements in an array
2. Finding a particular element
3. Getting the highest/Lowest Value*/
#include <stdio.h>

struct meaw {
  int num;
};

int main(void) {
  // 1. Getting 10 elements in an array (note: ques is not clear to me , what to
  // do?)
  int arr[10] = {0};
  printf("input 10 elements :\n");
  struct meaw karim[10];
  for (int i = 0; i < 10; i++) {
    printf("Getting Input inside struct karim[i].num ... %d : ", i);
    scanf("%d", &karim[i].num);
    arr[i] = karim[i].num;
  }
  printf("\nNow, Printing from array : ");
  for (int i = 0; i < 10; i++) {
    printf("%d ", arr[i]);
  }
  //
  printf("\n----------------------------\n");
  //
  // 2. Finding a particular element
  printf("I am going to find a particular element in the structure...");
  int which_number = 0;

  printf("\nInput a number : ");
  scanf("%d", &which_number);

  for (int i = 0; i < 10; i++) {
    if (which_number == karim[i].num) {
      printf("Found in %dth index(0~9)", i);
      break;
    }
  }
  //
  printf("\n----------------------------\n");
  //
  // 3. Getting the Lowest Value
  int i;
  int abc = karim[0].num; // THINK WHY ?
  for (i = 0; i < 10; i++) {
    if (abc > karim[i].num) {
      abc = karim[i].num;
    }
  }
  printf("\nMAX = %d in %dth index(0~9)", abc, i);
  // The End
} // WORKING NICELY