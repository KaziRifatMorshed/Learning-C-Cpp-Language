#include <cmath>
#include <cstdlib>
#include <cstring>
#include <stdio.h>
int main(void) {
  // char str[] = " as  -44 fd ";
  // printf("%d", atoi(strncpy(str, &str[3], strlen(str))));
  char str[] = "-33";
  printf("%f\n", (float)atoi(str));
  // float p = std::exp(5);
  float p = std::log(5);
  printf("%f\n\n", p);
  for (int i = 0; i < 10; i++) {
    printf("( i = %d\n", i);
    if (i % 2 == 0) {
      continue;
    }
    printf(" i = %d )\n", i);
  }
}