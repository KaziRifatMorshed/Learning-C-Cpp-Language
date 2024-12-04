#include <stdio.h>

int main(void) {
  FILE *fp;
  int length;

  fp = fopen("file.txt", "r");

  fseek(fp, 0, SEEK_END);
  length = ftell(fp); // return current position
  fclose(fp);

  printf("File size: %d bytes", length);
}
// output
// file size: 18 bytes
