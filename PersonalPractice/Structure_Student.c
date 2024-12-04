#include <stdio.h>
#include <string.h>

struct StuDent {
  char s_full_name[100];
  int age;
  int admission_year;
  // int roll_no; // 010205 = MM Sir's roll
  char roll_no[10];
}; // semicolon here

int main(void) {
  struct StuDent Rahim, Karim, Sakib, Munna;
  // Rahim.s_full_name = "Md Rahim Ali";
  strcpy(Rahim.s_full_name, "Md Rahim Ali");
  Rahim.age = 23;
  Rahim.admission_year = 2022;
  strcpy(Rahim.roll_no, "020509");
  // MEAW
  printf("s1 full name = ");
}