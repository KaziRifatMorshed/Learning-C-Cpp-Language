/*
**file practice question**
@author_Durjay
Solution by Kazi Rifat Morshed 230220

1. Write a C program to read numbers from a file and write even, odd and prime
numbers to separate file.

input->
73771782	81296771	79982326	75332246	10128193
81643413	76259734	94432076	50063976	91748657
42311916	-1920042	90747362	53851612	43498487
73193311	96685173	39019033	8630045		59322952

Output->

even.txt
73771782
79982326
75332246
76259734
94432076
50063976
42311916
-1920042
90747362
53851612
59322952
59322952

odd.txt
81296771
81643413
91748657
43498487
96685173
8630045

prime.txt
10128193
73193311
39019033

*/

#include <stdio.h>
#include <stdlib.h>

#define true 1
#define false 0

int isPrime(int num) {
  if (num <= 1) {
    return false;
  }
  if (num % 2 == 0) {
    return false;
  }
  for (int i = 3; i * i <= num; i += 2) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main(void) {
  FILE *f_even, *f_odd, *f_prime, *f_input;

  f_even = fopen("even1.txt", "w");
  f_odd = fopen("odd1.txt", "w");
  f_prime = fopen("prime1.txt", "w");
  f_input = fopen("input1.txt", "r");

  // char buff[20];
  // while (fscanf(f_input, "%s", buff) != EOF) {
  //   int temp = atoi(buff);

  int temp;
  while (fscanf(f_input, "%d", &temp) != EOF) {
    // fscanf e ekhane pointer nite hobe
    if (temp % 2 == 0) { // even
      fprintf(f_even, "%d\n", temp);
    } else { // odd
      fprintf(f_odd, "%d\n", temp);
    }
    if (isPrime(temp) == true) {
      fprintf(f_prime, "%d\n", temp);
    }
  }

  fclose(f_input), fclose(f_even), fclose(f_odd), fclose(f_prime);
} // DONE