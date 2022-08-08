

//Swapping without using third variable
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter two no.s to swap");
	scanf("%d%d",&a,&b);
 	a=a+b;
	b=a-b;
	a=a-b;
	printf("Swapped valuesa=%d b=%d",a,b);
}

