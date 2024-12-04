#include "stdio.h"

//float ctf(float celsius);
float ctf(float celsius)
{
    return ( celsius * 9 / 5 ) + 32 ;
}

int main()
{
    float celsius=0,f=0;
    printf("Input celsius and hit enter:");
    scanf("%f",&celsius);
    f= ctf(celsius);
    printf("it is %f in fahrenheit !!! Kool huuh ?", f);
    return 0;
}


