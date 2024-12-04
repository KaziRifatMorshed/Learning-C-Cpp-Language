#include "stdio.h"

void change_value(int *something);

int main() {
  int nb = 42;
  char a = 's';
  int *addnb = &nb;
  int **adddnb = &addnb;

  printf("%%d = %i and %%p == %p \t %p \n", nb, *adddnb, a);

  change_value(&nb);
  printf("%d\n", nb);
  return 0;
}

void change_value(int *kaka) { *kaka = 1337; }
