#include <inttypes.h>
#include <limits.h>
#include <stdio.h>
#include <stdlib.h>
// GPT
int main(void) {
  for (int i = 0; i < 6; ++i) {
    // Taking input as a string
    char buffer[20];
    printf("Enter an integer: ");
    fgets(buffer, sizeof(buffer), stdin);

    // Convert string to integer using strtol
    char *endptr;
    long element = strtol(buffer, &endptr, 10);
    // actually STR to LONG

    // Check for conversion errors
    if (buffer == endptr || *endptr != '\n') {
      printf("Invalid input. Please enter a valid integer.\n");
      continue; // Skip current iteration and go to next iteration
    }

    // Perform further processing with the integer value
    printf("You entered: %ld\n", element);
  }

  return 0;
}
