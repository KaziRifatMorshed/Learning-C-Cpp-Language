#include <stdio.h>
#include <string.h>
#include <sys/types.h>

struct any_family {
  char short_name[10];
  // char full_name[20];
  int age;
  float salary;
};

int main(void) {
  int n = 0, i;
  printf("Family and C Programming Structure\nHow many family Member do you "
         "have ? : ");
  scanf("%d", &n);
  struct any_family my_family[n];

  // taking inputs
  for (i = 0; i < n; i++) {
    printf("person %d's short name: ", i + 1);
    scanf(" %[^\n]", my_family[i].short_name); // gets is not available on linux
    // WHITESPACE SOLVED THE ISSUE
    /*https://stackoverflow.com/questions/25438718/why-to-put-space-between-d-and-c-while-inputting-there-values-using-scanf*/
    //  char temp[10] = {0};
    //  gets(temp);
    //  strcpy(my_family[i].short_name, temp);

    printf("person %d's age: ", i + 1);
    scanf("%d", &my_family[i].age);

    printf("person %d's salary: ", i + 1);
    scanf("%f", &my_family[i].salary);
  }

  // Output
  for (i = 0; i < n; i++) {
    printf("\nPerson %d's name is %s who is %d years old and has %f salary.",
           i + 1, my_family[i].short_name, my_family[i].age,
           my_family[i].salary);
  }
  // END
} // WORKING
  // Thanks to Sharafat Karim vai from PSTU