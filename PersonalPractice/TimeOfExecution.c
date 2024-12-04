#include <stdio.h>
#include <time.h>

int main() {
  clock_t start, end;
  double cpu_time_used;

  start = clock();

  // Code block for which execution time is measured
  // Replace this block with the code you want to measure
  for (int i = 0; i < 1000000; ++i) {
    // Some computation or task to measure
  }

  end = clock();

  cpu_time_used = ((double)(end - start))/ CLOCKS_PER_SEC; /// CLOCKS_PER_SEC;
  printf("Execution time: %f seconds\n", cpu_time_used);

  return 0;
}
/*
To measure the execution time of a piece of code, you can use functions provided
by the standard C library, such as clock() or platform-specific functions like
gettimeofday() (on Unix-based systems) or QueryPerformanceCounter() (on
Windows).

Example using clock():

In this example, the time taken to execute the code block between start and end
is measured using the clock() function. The execution time is then printed using
the printf() function.

Remember to replace the placeholder code inside the loop with the code you want
to measure.

These methods provide a basic way to print compilation time and measure
execution time in a C program. For more precise measurements or different
functionalities, there are more advanced techniques and libraries available,
such as time.h or platform-specific libraries that offer higher-resolution
timing functions.
*/