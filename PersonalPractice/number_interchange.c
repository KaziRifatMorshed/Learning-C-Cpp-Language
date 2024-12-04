# include <stdio.h>

int main()
{
    int arr[] = {10,20,30,40,50};
    int i=0, n= 5 , temp=0;

    for (i=0;i< n/2 ;i++) // do not use i<n as it will overwrite ...
    {
        temp = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = temp;
    }

    for (i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    int getch();
}