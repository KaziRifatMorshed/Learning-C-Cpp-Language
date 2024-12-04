//tamim subin book page no 209 of pdf
//contest program no 5
#include<stdio.h>
#include<stdlib.h>

int main()

{
    int n,i,j; //i = row  and j = column    a[i][j], a[line][j]

//first input section
    printf("please input line number, n= ");
    scanf("%d",&n);

    int a[n][5], max[n], mini[n];

//main input section
    for(i=0; i<n; i++)
    {
        scanf("%d %d %d %d %d",&a[i][0],&a[i][1],&a[i][2],&a[i][3],&a[i][4]);
        /*for(j=0;j<5;j++)
        {
            scanf("%d",&a[i][j]);
        }*/
    }
//calculation section
    for(i=0; i<n; i++)
    {
        //MAX
        max[i]=a[i][0];
        for(j=0; j<5; j++)
        {
            if(max[i]<a[i][j])
            {
                max[i]= a[i][j];
            }
        }
        //MINI
        mini[i]=a[i][0];
        for(j=0; j<5; j++)
        {
            if(mini[i]>a[i][j])
            {
                mini[i]= a[i][j];
            }

        }
    }
//display section
    printf("output\n");
    for(i=0; i<n; i++)
    {
        printf("line:%d ; max=%d ; mini=%d\n",i,max[i],mini[i]);
    }


    return 0;
    getch();
}

