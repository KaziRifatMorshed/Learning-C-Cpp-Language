#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void main()
{
    float x,y,p;
    printf("I am going to make x to the power y, input x and y:");
	scanf("%f %f",&x,&y);
    p = pow(x,y);
    printf("The result is = %f",p);

}