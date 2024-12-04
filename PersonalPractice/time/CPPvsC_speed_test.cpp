#include <iostream>
// #include <stdio.h>
#include <time.h>

int main() {
  clock_t start, end;
  int temp = 0;
  double cpu_time_used;

  start = clock();
  for (int i = 0; i < 1000000; ++i) {
    // Some computation or task to measure
    temp += i & 1, temp += i & 1;
  }

  end = clock();

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC; /// CLOCKS_PER_SEC;

  printf("Execution time: %f seconds\t%d\n", cpu_time_used, temp);
  std::cout << "eXECUTION TIME: " << cpu_time_used << " seconds\t" << temp;
  return 0;
}