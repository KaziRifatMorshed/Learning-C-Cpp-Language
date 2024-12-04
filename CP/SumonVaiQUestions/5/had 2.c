#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=0;i<7;i++)
    {

        for(j=0;j<7;j++)
        {
            if(j>=i)
            {
                printf("c");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    for(i=5;i>=0;i--)
    {
        m=0;
        for(j=0;j<7;j++)
        {
            if(j>=i)
            {
                printf("c");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}

