#include<stdio.h>
int main()
{
    int i,j,m;
    for(i=1;i<8;i++)
    {

        for(j=1;j<8;j++)
        {
            if(8-i>=j)
            {
                printf("C");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");

    }
    for(i=6;i>=1;i--)
    {
        for(j=1;j<8;j++)
        {
            if(8-i>=j)
            {
                printf("C");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

}
