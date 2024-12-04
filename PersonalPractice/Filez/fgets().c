#include <stdio.h>
int main(void) {
  FILE *f = fopen("file2.txt", "r");

  char str[300] = {};

  // IT IS A WRONG APPROACH
  // while (a--) {
  //   fgets(str, 300, f); // for some reason, getting the first line only when
  //   it
  //                       // is not inside a loop
  //   printf("\n%s", str);
  // }

  while (fgets(str, 300, f) != NULL) {
    // printf("\n_%s_", str); // NEW LINE CATCH করছে
    printf("_%s_-/-", str);
  }

  fclose(f);
}