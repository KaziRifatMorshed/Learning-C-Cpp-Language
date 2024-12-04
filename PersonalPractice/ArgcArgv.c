#include <stdio.h>
#include <string.h>
#include <strings.h>
int main(int argc, char *argv[]) {
  printf("Hello World\nArgC: %d\n", argc);
  for (int i = 0; i < argc; i++) {
    printf("%d : %s\n", i, argv[i]);
  }
  if (argc > 1 && strcasecmp(argv[1], "-c") == 0) {
    printf("\nfirst parameter is \'-c\'");
  }
  return 0;
}
/*
// ./"ArgcArgv" -C a agrg rasfc 123
// Hello World
// ArgC: 6
// 0 : ./ArgcArgv
// 1 : -C
// 2 : a
// 3 : agrg
// 4 : rasfc
// 5 : 123
//
// first parameter is '-c'⏎
*/