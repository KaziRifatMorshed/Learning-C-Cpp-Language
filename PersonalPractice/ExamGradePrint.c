#include "stdio.h"

//printf("");
//scanf("%",&);
int main()
{   int marks=0;
	printf("Input your marks: ");
	scanf("%d",&marks);
    if(marks<=100 & marks>=0) // getting a valid input is important, btw, we can't let them to laugh at us
    {    if (marks<=100 && marks>=80) {
            printf("Kudos !! You got A+");
        }
        if (marks<80 && marks>=75) {
            printf("You got A");
        }
        if (marks<75 && marks>=0) {
            printf("We are sorry thast you have failed");
        }
    }
    else {
    printf("Run the program again and enter a valid input.... noThank You");
    }

return 0;
}