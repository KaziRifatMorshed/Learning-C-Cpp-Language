/*
return_type function_name(parameter){
    function_body;
    return a_value;
}
*/
#include "stdio.h"
#define API 314

int baba(int alpha) {
  int y = alpha;
  alpha = 2 * y;
  printf("%d,%d\n", alpha, y);
  return (alpha * y);
}

int main() {
  int x = 10, y = 20, z = 30;

  z = baba(x);

  printf("%d,%d,%d", x, y, z);
}

/*
int add(double z, double c);
int main() {
  double a, b, c;
  a = b = 2.5;
  c = add(a, b);
  printf("c = %lf", c);
  return 0;
}
int add(double z, double c) {
  double sum = z + c;
  return sum;
}
*/