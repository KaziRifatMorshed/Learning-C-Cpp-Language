#include <stdio.h>
#include <stdlib.h>
// #include <string.h>
#include <limits.h>

struct tuple {
  int first, second, third;
};

struct student {
  int roll;
  int marks;
};

int max(int a, int b) { return a > b ? a : b; }
int min(int a, int b) { return a < b ? a : b; }

void swap(struct student *a, struct student *b) {
  struct student temp = *a;
  *a = *b;
  *b = temp;
}

int main(void) {
  struct student s[10];
  /*
  int n, i, ma = INT_MIN, mi = INT_MAX, sum = 0;
  double avg;

  scanf("%d", &n);

  struct tuple t[n];

  for (i = 0; i < n; i++) {
    scanf("%d", &t[i].first);
    scanf("%d", &t[i].second);
    scanf("%d", &t[i].third);

    ma = max(ma, t[i].first);
    sum += t[i].second;
    mi = min(mi, t[i].third);
  }

  avg = (double)sum / n;

  printf("max = %d\navg = %0.2lf\nmin = %d\n", ma, avg, mi);
*/

  for (int i = 0; i < 10; i++) {
    s[i].roll = i;
    s[i].marks = rand() % 100;
  }

  for (int i = 0; i < 9; i++) {
    for (int j = i + 1; j < 10; j++) {
      if (s[i].marks > s[j].marks) {
        swap(s + i, s + j);
      }
    }
  }

  for (int i = 0; i < 10; i++) {
    printf("%d\t%d\n", s[i].roll, s[i].marks);
  }

  /*
  for (int i = 0; i < 4; i++) {
    halum[i].first = i;
    halum[i].second = i + 1;
    halum[i].third = i + 2;
  }

  for (int i = 0; i < 4; i++) {
    printf("%d\t%d\t%d\n", halum[i].first, halum[i].second, halum[i].third);
  }*/
}