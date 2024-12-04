#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int main(void) {
  float x = 13.3, y = 9.9;
  printf("%d %d | %d %f ", (int)x, (int)ceil(x), (int)y, floor(y));
}
/*
ceil() and floor()
returns same data type, so, in printf, keep same data type
or convert it using typecasting */