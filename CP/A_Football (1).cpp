// 230220
#include <bits/stdc++.h>
#include <cstring>
#include <string.h>
typedef unsigned long long int ulli;
using namespace std;

#define get cin >>
#define nget >>
#define true 1
#define false 0

int main(void) {
  int t;
  char t1[11] = "", t2[11] = "";
  int count_t1 = 0, count_t2 = 0;
  std::cin >> t;
  for (int i = 0; i < t; i++) {
    char inp[11];
    get inp;
    if (i == 0) {
      strcat(t1, inp);
      count_t1++;
    }
    if (strcmp(t1, inp) != 0 && strcmp(t2, inp) != 0) {
      strcat(t2, inp);
      count_t2++;
    }
    if (strcmp(t1, inp) == 0) {
      count_t1++;
    }
    if (strcmp(t2, inp) == 0) {
      count_t2++;
    }
    // while end
  }
  cout << ((count_t1 > count_t2) ? t1 : t2);
  // the end
} // DONE