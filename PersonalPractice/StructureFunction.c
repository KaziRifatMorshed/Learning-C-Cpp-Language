#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define true 1
#define false 0

int sum(struct man *meaw) {
  int sum = 0, i = 3;
  while (i--) {
    sum += meaw->age;
  }
  return sum;
}
struct man {
  char name[10];
  int age;
};

int main(void) {
  struct man friends[3];

  // int i, *pttr;
  struct man *ptr; // ! NEED TO SPECIFY "man"

  // getting input
  for (ptr = friends; ptr < (friends + 3); ptr++) {
    printf("input -> ");
    scanf(" %s %d", ptr->name, &ptr->age);
  }

  printf("Total Age = %d", sum(ptr));
} // INCOMPLETE