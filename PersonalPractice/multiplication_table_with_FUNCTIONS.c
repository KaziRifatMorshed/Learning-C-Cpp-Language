#include "stdio.h"

void multable(int n)
{
    int i=0;
    for(i=1;i<=10;i++){printf(" %d X %d == %d\n",n,i, n*i);}
}

void main()
{
    int n=0;
    printf("koto er ghor er namta ? =>");
    scanf("%d",&n);
    multable(n);
}