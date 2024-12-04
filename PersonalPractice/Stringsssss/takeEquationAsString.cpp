#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <limits>
#include <stdio.h>
using namespace std;

#define a 0
#define b 1
#define c 2
#define d 3

// example
// a1 = 2.0f, b1 = 1.0f, c1 = 1.0f, d1 = 5.0f;
// a2 = 3.0f, b2 = 5.0f, c2 = 2.0f, d2 = 15.0f;
// a3 = 2.0f, b3 = 1.0f, c3 = 4.0f, d3 = 8.0f;

// coEfficientMatrix[num_equations][num_coEfficients]
float M[3][4]; // coEfficientMatrix

float x1 = 0.0f, x2 = 0.0f, x3 = 0.0f;
float x1_prev = 0.0f, x2_prev = 0.0f, x3_prev = 0.0f;
int n = 0;
const float E = 0.00005f;

void take_three_input() {
  // test case -3x1+55x2-2x3=-5
  for (int eq_no = 0; eq_no < 3; eq_no++) { // take three equation input

    char input_eq[40] = {0};
    int abcd = 0; // co-efficient tracker
    scanf("%[^\n]", input_eq);
    int prev_idx = 0, str_len = strlen(input_eq);

    for (int i = 0; i < str_len; i++) { // catch all coefficients

      if (input_eq[i] == 'x' || input_eq[i] == '=') {

        char co_eff[10] = {0};

        if (input_eq[i] == '=') {
          prev_idx++;
          i = str_len;
        }
        strncpy(co_eff, &input_eq[prev_idx], (int)(i - prev_idx));

        M[eq_no][abcd] = (float)atoi(co_eff);

        abcd++;
        prev_idx = i + 2;
        i++;
      }
    }

    getchar(); // dummy
  }
} // working

int main(void) {
  take_three_input();
  for (int i = 0; i < 4; i++) {
    printf("%0.0f\n", M[0][i]);
  }
}

/*
ADVANCED

void take_three_input() {
  // test case -3x1+5x2-2x3=-5
  for (int eq_no = 0; eq_no < 3; eq_no++) { // take three equation input

    char input_eq[20];
    bool isNegative = false;
    int sign_idx = -1, prev_idx = -1;
    int abcd = 0; // co-efficient tracker
    scanf("%[^\n]", input_eq);

    for (int i = 0; input_eq[i] != '\0'; i++) { // catch all coefficients

      if (input_eq[i] == '-') {
        sign_idx = i;
        isNegative = true;
      }

      if (input_eq[i] == 'x' && input_eq[i + 1] == ('1' + i)) {

        M[eq_no][abcd] =
            atoi(strncpy(input_eq, &input_eq[sign_idx + 1], strlen(input_eq)));

        if (isNegative) {
          M[eq_no][abcd] *= -1;
          isNegative = false;
        }
        printf("..%d..", M[eq_no][abcd]);
        abcd++;
        prev_idx = i;
      }
      if (input_eq[i] == '=') {
        sign_idx = i;
        M[eq_no][abcd] =
            atoi(strncpy(input_eq, &input_eq[sign_idx + 1], strlen(input_eq)));
        printf("..%d..", M[eq_no][abcd]);
      }
    }

    getchar(); // dummy
  }
}
*/