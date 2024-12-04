#include <regex.h>
#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
struct database {
  char name[40];
  int count;
};

/*
regcomp(&regex, expression, flag)

where,
regex is a pointer to a memory location where expression is matched and stored.
expression is a string type
flag to specify the type of compilation
*/

int main(void) {
  char rahim[10] = "rahim";
  char karim[10] = "karim23";
  char jamal[10] = "jamal105";

  char r1[10] = {0};
  char r2[10] = {0};
  char r3[10] = {0};
  regcomp(r1, "[:word:]", int cflags)

  // INCOMPLETE
}
