// Kazi Rifat Morshed 230220
// 1
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define true 1
#define false 0

struct database {
  char name[40];       // will contain name and prefix number
  char first_name[40]; // will contain just the name
  int count;
} data[105];

int search_in_database(char *key) {
  int index = -1; // minus one for not found
  for (int i = 0; i < 105; i++) {
    if (strcmp(data[i].first_name, key) == 0) {
      index = i;
    }
  }
  // will search till last and return last entered matched index
  return index;
}

/* NOTE:
 105 is the highest number of requests which is a 3 digit number, so, the digits
 after an username can be 3 digits..*/
void __itoa__(char *str, int num) {
  // a function which will convert int to a string of length 3
  // itoa() does not work in my linux system, so, I could not learn that library
  // function, thats why, I implemented it manually
  // str[3] is '\n'
  if (num < 10) {
    str[0] = 48 + (num % 10);
  } else if (num < 100) {
    str[1] = 48 + (num % 10);
    num /= 10;
    str[0] = 48 + (num % 10);
  } else {
    str[2] = 48 + (num % 10);
    num /= 10;
    str[1] = 48 + (num % 10);
    num /= 10;
    str[0] = 48 + (num % 10);
  }
} // function is working

int main(void) {
  int n = 0;              // length/size of database
  int struct_pointer = 0; // available new row of database
                          // this pointer keeps track of registered user count
  scanf("%d", &n);

  int _n = n;
  while (_n--) { // loop for performing n operations
    char input_string[50] = {0};
    scanf(" %[^\n]", input_string);
    char command = input_string[0];
    char *__input_string = &input_string[2];

    // MAIN OPERATION
    // CASE 1: ADD NEW USER
    if (command == 'a') { // case: ADD
      int search_result = search_in_database(__input_string);
      // IF SEARCH NOT FOUND
      if (search_result == -1) { // add new name
        strcpy(data[struct_pointer].name, __input_string);
        strcpy(data[struct_pointer].first_name, __input_string);
        data[struct_pointer].count = 0;
        struct_pointer++;
        printf("OK\n");
      }
      // IF NAME MATCH FOUND
      else {
        int previous_name_count = data[search_result].count;
        // getting count of last match from struct/database
        data[struct_pointer].count = previous_name_count + 1;
        strcpy(data[struct_pointer].name, __input_string);
        strcpy(data[struct_pointer].first_name, __input_string);
        // now, need to convert int type count to string and concat with the
        // name
        char itoa[4];
        __itoa__(itoa, data[struct_pointer].count); // user defined function
        strcat(data[struct_pointer].name, itoa);
        printf("%s\n", data[struct_pointer].name);
        struct_pointer++;
      }

      // MAIN OPERATION: CASE 2: DELETE
    } else {
      // int search_result = search_in_database(__input_string);
      for (int i = 0; i < 105; i++) {
        if (strcmp(data[i].first_name, __input_string) == 0) {
          strcpy(data[i].name, "\0");
          strcpy(data[i].first_name, "\0");
          // data[search_result].name[0] = '\n'; // set NULL CHAR at first
          data[i].count = 0;
        }
      }

      printf("DELETED\n"); // prompt
    }
    //
  }
  // end
} // WORKING !!!! at last, successful at 10:59PM