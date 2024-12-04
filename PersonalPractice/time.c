#include <stdio.h>
#include <time.h>

int main(void) {
  time_t now = time(NULL);
  struct tm *local = localtime(&now);
  int today = local->tm_mday;
  printf("%li", today);
}