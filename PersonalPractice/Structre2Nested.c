#include <stdio.h>
struct DateOfBirth {
  int date, month, year;
};
struct gpas {
  float ygpa[4];
};
struct exam_marks {
  int phy, math, chem;
};
struct KU_Stu {
  char name[25];
  char ID[7];
  char discipline[12];
  // int merit;
  int year_of_admission;
  struct DateOfBirth dob[3];
  struct exam_marks marks;
  float cgpa;
};

int main(void) {
  struct KU_Stu KU_23[5];
  printf("Hello World !\vI am just a DUMB program\vto show the dummy results "
         "of dummy KUans !!\nWe have 10 CSE Students here\nPlease follow these "
         "instructions: Hit Enter\n");
  //
  for (int i = 0; i < 5; i++) {
    // getchar();
    printf("enter student-%d name : ", i + 1);
    gets(KU_23[i].name);
    // scanf("%[^\n]s ", KU_23[i].name);
    // getchar();
    printf("enter student-%d ID : ", i + 1);
    gets(KU_23[i].ID);
    // scanf("%[^\n]s ", KU_23[i].ID);
    // getchar();
    printf("enter student-%d discipline : ", i + 1);
    gets(KU_23[i].discipline);
    // scanf("%[^\n]s ", KU_23[i].discipline);
    // getchar();
    printf("enter student-%d year of admission : ", i + 1);
    scanf("%d\n", &KU_23[i].year_of_admission);
    printf("enter student-%d Date of Birth [dd mm yyyy] : ", i + 1);
    scanf("%d %d %d ", &KU_23[i].dob[i].date, &KU_23[i].dob[i].month,
          &KU_23[i].dob[i].year);
    printf("enter student-%d Phy Marks : ", i + 1);
    scanf("%d\n", &KU_23[i].marks.phy);
    printf("enter student-%d Math Marks : ", i + 1);
    scanf("%d\n ", &KU_23[i].marks.math);
    printf("enter student-%d Chem Marks : ", i + 1);
    scanf("%d\n ", &KU_23[i].marks.chem);
  }
}
