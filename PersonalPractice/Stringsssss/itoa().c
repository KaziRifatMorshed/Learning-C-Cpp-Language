#include <stdio.h>
#include <stdlib.h>
int main(void) {
  char str1[10] = "12345";
  int num1 = atoi(str1);
  printf("STRING = %s | NUM = %d\n", str1, num1);
  int num2 = 4567;
  char str2[10];
  itoa(num2, str2, 10);
  printf("STRING2 = %s", str2);
}
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int rifat;
    char turjo [10];

    rifat = 123456789;

    itoa (rifat, turjo, 10);

    puts(turjo);

    return 0;
}*/