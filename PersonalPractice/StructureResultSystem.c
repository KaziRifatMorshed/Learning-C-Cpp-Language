#include <stdio.h>
// #include <math.h>
#include <string.h>

// INCOMPLETE CODE COPIED FOR CT

// FUNCTIONS
float best_count_2(float a, float b) { return (a > b) ? a : b; }
float best_count_3(float a, float b, float c) {
  return (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
}
float avg_2(float a, float b) { return ((a + b) / 2); };
float avg_3(float a, float b, float c) { return ((a + b + c) / 3); };
float GPA(int n) {
  return (n >= 80)   ? 4
         : (n >= 75) ? 3.75
         : (n >= 70) ? 3.5
         : (n >= 65) ? 3.25
         : (n >= 60) ? 3
         : (n >= 55) ? 2.75
         : (n >= 50) ? 2.5
         : (n >= 45) ? 2.25
         : (n >= 40) ? 2
                     : 0;
};
char GRADE(float n) {
  return *((n >= 80)   ? "A+"
           : (n >= 75) ? "A"
           : (n >= 70) ? "A-"
           : (n >= 65) ? "B+"
           : (n >= 60) ? "B"
           : (n >= 55) ? "B-"
           : (n >= 50) ? "C+"
           : (n >= 45) ? "C-"
           : (n >= 40) ? "D"
                       : "F");
}

// GLOBAL VARIABLES
// int num_of_stu = 0;
// int num_of_course = 0;

// STRUCTURES
struct TGPA {
  float tgpa;
};
struct YGPA {};
struct mark {
  int CT1A, CT2A, CT1B, CT2B, attandence, TermFinal;
};
struct course {
  int course_code;
  int course_credit;
  struct mark marks;
};

struct stu_basic_data {
  char name[30];
  char ID[7];
  struct course course;
};
//
// ================================================================
//
// MAIN FUNCTION
int main(void) { // ID230220 Khulna University CSE

  int num_of_stu = 0;
  int num_of_course = 0;

  printf("(Welcome\nUni Exam Result\nusing C language and "
         "Structure-Union\nFirst Add Courses. Input number of courses : ");

  // Add Course Details
  scanf(" %d ", &num_of_course);

  struct course course[num_of_course];
  for (int i = 0; i < num_of_course; i++) {
    printf(" %d. Enter Course Code <space> Credit Hour : ", i + 1);
    scanf(" %d %d ", &course[i].course_code, &course[i].course_credit);
    printf("\n(SUCCESS %d.Course Code:%d  Credit Hour: %d) \n", i + 1,
           course[i].course_code, course[i].course_credit);
  }

  // Fix number of students
  printf("\nInput number of students : ");
  scanf(" %d ", &num_of_stu);
  printf("\nnum of stu = %d", num_of_stu);

  struct stu_basic_data student[num_of_stu];
  //
  //
  // input data
  printf("\nInput Studdent's Data one-by-one...");
  for (int i = 0; i < num_of_stu; i++) {
    printf("\nenter student%d name: ", i + 1);
    scanf(" %[^\n] ", student[i].name); // Still, Awfully doesn't work
    // gets(student[i].name);

    printf("\nenter student%d ID:", i + 1);
    scanf(" %[^\n] ", student[i].ID);
    // gets(student[i].ID);

    printf("\nInput Marks as the following order...\n"
           "1st CT Section A<space>2nd CT Section A<space>1st CT Section "
           "B<space>2nd CT Section B<space>Attendence<space>Term Final\n : ");
    for (int j = 0; j < num_of_course; j++) {
      printf("Input Course %d's marks in order\n", course[i].course_code);
    }
  }

  // processing

  // result publishing

  // ranking
}