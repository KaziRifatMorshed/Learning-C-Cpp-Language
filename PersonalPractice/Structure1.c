#include <inttypes.h>
#include <stdio.h>
// struct comPlex {
//   float real;
//   float img;
// };
struct KU_Students {
  char stu_name[20];
  char stu_id[7];
  
  short date_of_birth;
  int year;
} rahim;
// struct comPlex Add_Complex_Function(struct comPlex real, struct comPlex img)
// {
//   /*Declare Variable Name*/ struct comPlex C3;
//   // C3.real = C1.real;
//   return C3;
// }
int main(void) {

  struct StuRecord {
    int height;
    int weight;
  } StudentNo02 = {129, 57};

  struct StuRecord StudentNo1 = {159, 70};

  printf("%d|%d||%d|%d\n", StudentNo1.height, StudentNo1.weight,
         StudentNo02.height, StudentNo02.weight);

  scanf("%s %s %hd %d", rahim.stu_name, rahim.stu_id, &rahim.date_of_birth,
        &rahim.year);
  printf("%s %s %hd %d", rahim.stu_name, rahim.stu_id, rahim.date_of_birth,
         rahim.year);

  
}