// replace all MAX_ARRAY_LENGTH with 20
#define MAX_ARRAY_LENGTH 20
// Get stdio.h from the system library
#undef FILE_SIZE
#define FILE_SIZE 42 // undefine and define to 42

#include <stdio.h>

#define message_for(a, b) printf(#a " and " #b ": We love you!\n")

int main(void) {

  message_for(Carole, Debra);

  return 0;
}

/*
#define	define a macro
#include	include a source code file

#undef	undefined macro
#ifdef	Returns true if the macro is defined
#ifndef	Returns true if the macro is not defined

#if	Compile the following code if the given condition is true
#else	Alternative to #if
#elif	If the #if condition is false, the current condition is true
#endif	End a #if...#else conditional compilation block

#error	Print an error message when standard error is encountered

#pragma	Issue special commands to the compiler using the standardized method
*/