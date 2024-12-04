#include <stdio.h>
#define DEBUG_PRINT(var)                                                       \
  printf("File: %s, Line: %d, %s = %d\n", __FILE__, __LINE__, #var, var)

#define COMPILE_TIME __DATE__ "-~-" __TIME__

int main() {
  printf("Compiled on: %s\n\n", COMPILE_TIME);
  int x = 10;
  DEBUG_PRINT(x);
  return 0;
}
