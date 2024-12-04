#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

void check_is_file_open_or_not(FILE *fp) {
  if (fp == NULL) {
    printf("File is not opened, the program will now exit.\n");
    exit(0);
  } else {
    printf("file opened successfully\n\n");
  }
}

void return_value_checker(int i) {
  if (i != 0) {
    printf("\nfile operation failure\n");
  } else {
    printf("\nfile operation successful\n");
  }
}

void _file_close_and_msg(FILE *p) {
  fclose(p);
  printf("\nFile has been closed\n");
}