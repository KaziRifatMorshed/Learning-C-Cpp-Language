// The fputc() function is used to write a single character into file. It
// outputs a character to a stream.

// The fgetc() function returns a single character from the file. It gets a
// character from the stream. It returns EOF at the end of file.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(void) {
  FILE *f = fopen("text2.txt", "w+");
  putc('a', f);

  rewind(f);

  char c;
  while ((c = fgetc(f)) != EOF) { // inside parenthesis
    printf("%c", c);
  }
  //
  rewind(f);
  char str[] = "i am a disco dancer";
  fputs(str, f);

  rewind(f);
  while ((c = fgetc(f)) != EOF) { // inside parenthesis
    printf("%c", c);
  }

  fclose(f);
  system("clear");
}