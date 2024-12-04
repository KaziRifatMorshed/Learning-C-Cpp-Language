#include <stdio.h>

int main() {
  printf("File :%s\n", __FILE__);
  printf("Date :%s\n", __DATE__);
  printf("Time :%s\n", __TIME__);
  printf("Line :%d\n", __LINE__);
  printf("ANSI :%d\n", __STDC__);
}
/*

__DATE__	The current date, a character constant in the format "MMM DD
YYYY"
__TIME__	The current time, a character constant in the format "HH:MM:SS"
__FILE__	This will contain the current filename, a string constant
__LINE__	This will contain the current line number, a decimal constant
__STDC__	Defined as 1 when the compiler compiles against the ANSI

standard ANSI C defines a number of macros that you can use, but you cannot
directly modify these predefined macros

*/