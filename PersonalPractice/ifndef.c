#include  <stdio.h>
#define M 4

#define sum(xy) printf(#xy " =(equals to) %d\n", xy); // here, xy is just a formal parameter which will be taken from them main function
// here hash inside `printf` says to put that as a string and concatanate it

#ifndef N
#define N 3
#endif

int main(void){
	printf("%d\n\n",N);
	sum(M+N);
	int a = 7, b = 8;
	sum(a+b);

}
