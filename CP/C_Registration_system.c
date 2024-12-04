#include <stdio.h>
#include <string.h>
#define true 1
#define false 0

struct accounts {
  char ac_name[33];
  unsigned long count;
};

int main(void) {
  unsigned long quantity = 0;
  unsigned long struct_pointer = 0;

  scanf("%lu", &quantity);       // input how many requests
  struct accounts acc[quantity]; // create struct array

  // for (int i = 0; i < quantity; i++) { // i => input runner loop
  while (quantity--) {
    // input registration name of new user
    char temp[33] = {0};
    scanf(" %[^\n]", temp);

    for (unsigned long j = 0; j <= struct_pointer; j++) { // j => Checker Loop
      // first search if you find any match
      if (strcmp(acc[j].ac_name, temp) == 0) {
        acc[j].count++;
        printf("%s%lu\n", acc[j].ac_name, acc[j].count);
        break;
      }
      // match not found, add the data
      if (j == struct_pointer) {
        strcpy(acc[j].ac_name, temp);
        acc[j].count = 0;
        printf("OK\n");
        struct_pointer++;
        break; // CAREFUL
      }
    }
  }

  // the end
} // DONE

//
//
//
//
//
//
//
//
//
//
//
/*
    // Online C compiler to run C program online
    #include <stdio.h>

    int main() {
        // Write C code here

        char str[100005][35], s[35];
        int counter[100005], count = 0, flag = 0;
        long int n, i=0, j=0;

        scanf ("%ld", &n);
        for (i=0;i<n;i++)
        {
            scanf ("%s", s);
            flag = 0;
            for (j=0;j<count;j++)
            {
                if (strcmp(s, str[j]) == 0) { flag = 1; break; }
            }
            if (flag == 1)
            {
                printf ("%s%d", s, ++counter[j]);
            }
            else
            {
                printf ("OK");
                strcpy (str[count], s);
                counter[count] = 0;
                count++;
            }
            printf ("\n");
        }


        return 0;
    }*/