#include<stdio.h>
int main()
{
    int n=0,m=0,positive=0,negative=0,i;

    printf("input n (how many numbers...?) .....");
    scanf("%d",&n);
    printf("now input %d numbers in a row that includes positive and negative numbers\n",n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&m);
        if(m>0)
        {
            positive++;
        }
        if(m<0)
        {
            negative++;
        }
        /*else
        {
            positive++;
        }*/
    }

    printf("positive= %d and negative= %d\n",positive,negative);
    return 0;
    getch();
}
