#include <stdio.h>
#include <time.h>

int _fibonacci(int base_value) {
  if (base_value == 0 || base_value == 1) {
    return base_value;
  } else {
    // printf("%d ", _fibonacci(base_value - 1) + _fibonacci(base_value - 2));
    // Don't Do that
    return _fibonacci(base_value - 1) + _fibonacci(base_value - 2);
  }
}

int main(void) {
  clock_t start, end;
  double cpu_time_used;

  int n = 0;
  scanf("%d", &n);
  start = clock();
  for (int i = 0; i <= n; i++) {
    printf("%d ", _fibonacci(i)); // Perfection
  }
  end = clock();

  cpu_time_used = ((double)(end - start)) / CLOCKS_PER_SEC;
  printf("\nTIME OF EXECUTION = %20.20f", cpu_time_used);
}
/*
SEAM's CODE
#include <stdio.h>

int count = 0;

int fibonacci(int i) {
  count++;
  if (i == 0) {
    return 0;
  }
  if (i == 1) {
    return 1;
  }
  return fibonacci(i - 1) + fibonacci(i - 2);
}

int main() {
  int n, i;
  scanf("%d", &n);
  for (i = 0; i < n; i++) {
    printf("%d ", fibonacci(i));
  }
  printf("\n\n%d\n", count);
  return 0;
}*/