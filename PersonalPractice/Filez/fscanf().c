#include <stdio.h>
int main(void) {
  FILE *f = fopen("file1.txt", "r");
  char _buff[255] = {0};

  while (fscanf(f, "%c", _buff) != EOF) {
    // format `%c` ar `%s` er upor depend kore kivabe source theke ek ek kore
    // collect korbe `fscanf()` ek ekta word by word catch kore, so, _buff
    // (steam) e ekta ekta kore word dhukse
    printf("%s", _buff);
  }
  fclose(f);
}