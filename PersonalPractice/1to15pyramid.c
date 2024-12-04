/*
//for loop
#include "stdio.h"
int main()
{
    int i,j,n=0; // i is for line(row) and j is for column
	printf("input last number for printing number pyramid: ");
	scanf("%d",&n);

    for (i=1;i<=n;i++) {
        for (j=1;j<=i;j++) {
            printf("%d ",j);}
    printf("\n");
    }
return 0;
}
*/

//=================================================

/*while loop
#include "stdio.h"
int main()
{
    int i=1,j=1,n=0; // i is for line(row) and j is for column
	printf("input last number for printing number pyramid: ");
	scanf("%d",&n);

    while (i<=n) {
        j=1;  // if i do not write this line (j=1), the code doesn't work properly 
        //but i had decleared j=1 at first/beginging, so, why it is happening ?
        while (j<=i) {
            printf("%d ",j);
            j++;
        }
    printf("\n");
    i++;
    }
return 0;
}
*/

//======================================

//do while loop
#include "stdio.h"

    int myfuntion(int i, int j, int n)
    {
            do{
        j=1;  // if i do not write this line (j=1), the code doesn't work properly 
        //but i had decleared j=1 at first/beginging, so, why it is happening ?
        do{
            printf("%d ",j);
            j++;
        }while (j<=i);
    printf("\n");
    i++;
    }while (i<=n);
    }

int main()
{
    int i=1,j=1,n=0; // i is for line(row) and j is for column
	printf("input last number for printing number pyramid: ");
	scanf("%d",&n);

    myfuntion(i,j,n);

return 0;
}