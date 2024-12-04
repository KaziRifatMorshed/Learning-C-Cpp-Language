#include <stdio.h>
int main(void) {
  unsigned long file_len;
  char buff[300];
  FILE *f = fopen("file2.txt", "r");
  // rewind(f); // SETS FILE POINTER TO FIRST

  fseek(f, 0, SEEK_END);
  file_len =
      ftell(f); // The ftell() function obtains the current value of the file
                // position indicator for the stream pointed to by stream.
  rewind(f);

  fread(buff, sizeof(char), file_len, f);

  printf("inside the file was: %s", buff);

  fclose(f);
}