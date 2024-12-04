#include <stdio.h>
int main() {
  char string1[80] = "I a\tm a disco dancer !!!\0";
  // scanf("%s", &string1); // it will not take ay spaces
  fgets(string1, sizeof(string1), stdin);
  printf("\n%s", string1);

  // it is better to input gets instead os scanf
  return 0;
}