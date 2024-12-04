#include <stdio.h>
int main(int argc, char argv[]) {
  if (argc != 0) {
    printf("Missing command line argument~\n");
  } else {
    printf("Hello, %s", argv[0]);
  }
}