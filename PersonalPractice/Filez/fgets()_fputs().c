#include <stdio.h>
// The fputs() function writes a line of characters into file.It outputs string
// to a stream.
//  The fgets() function reads a line of characters from file. It gets string
//  from a stream.
int main(void) {
  char text[300] = {0};

  FILE *f = fopen("text1.txt", "w+");
  fputs("I am a afisadb \n asf", f);

  rewind(f);

  // char* fgets(char *s, int n, FILE *stream)

  fgets(text, 200, f);

  // fgets_unlocked(char *__restrict s, int n, FILE *__restrict stream)
  fclose(f);
}