#include <stdio.h>
int main(void) {
  int id;
  float salary;
  char name[40] = {0};
  FILE *f = fopen("Employees.txt", "w+");
  printf("\tinput employee data...\n");

  printf("Employee ID: ");
  scanf("%d", &id);
  fprintf(f, "Employee ID is %d\n", id);

  printf("Employee Name: ");
  scanf("%s", name);
  fprintf(f, "Employee NAME is %s\n", name);

  printf("Employee Salary: ");
  scanf("%f", &salary);
  fprintf(f, "Employee Salary is %f\n", salary);

  fclose(f);
  // end
} // WORKING