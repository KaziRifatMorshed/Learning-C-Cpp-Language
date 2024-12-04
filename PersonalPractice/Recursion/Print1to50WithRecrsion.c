#include <stdio.h>
void printer(int number) {
  if (number > 50) { // 50 কে টাচ করার জন্য ৫০ থেকে বড় নিতে হবে
    return;
  } else {
    printer(number + 1);
    printf("%d ", number);
  }
}

int main(void) { printer(1); } // DONE
