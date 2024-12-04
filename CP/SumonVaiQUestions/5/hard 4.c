#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<7;i++)
    {
        for(j=1;j<12;j++)
        {
            if(j<i||j>12-i)
            {
                printf(" ");
            }
            else
            {
                printf("c");
            }

        }
               printf("\n");
    }
     for(i=5;i>0;i--)
    {
        for(j=1;j<12;j++)
        {
            if(j<i||j>12-i)
            {
                printf(" ");
            }
            else
            {
                printf("c");
            }

        }
               printf("\n");
    }
}
