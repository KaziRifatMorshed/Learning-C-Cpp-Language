#include <stdio.h>
#include <string.h>

#define true 1
#define false 0
struct database {
  char name[40];
  int count;
};

int main(void) {
  char input_string[40] = "d afafa124";
  char input_name[40] = {0};
  int len = strlen(input_string);
  // want a separate string that contain just the name
  for (int i = 2; i < len; i++) {
    input_name[i - 2] = input_string[i];
  }
  printf("%s", input_name);
  //
}
