#include "stdio.h"
#include "string.h"
typedef char string;

void showingg(char *ahhhh) { printf("%s", ahhhh); }

int main(void) {
  string *abc = "pakhi paka pepe khay";
  printf("%s\n", abc);
  showingg(abc);
}