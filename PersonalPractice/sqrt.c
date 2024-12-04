#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    double input1=0,result=0,p=0;
	printf("WE are going to calculate the sqrt of:");
	scanf("%lf", &input1);
    result = sqrt(input1);
    printf("The result is = %lf\n",result);
    
    p = pow(input1,input1);
    printf("%g to the power %g is %g", input1, input1, p); 

    return 0;
}