

//Swapping  using third variable
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter two no.s to swap");
	scanf("%d%d",&a,&b);
    c=a;
	a=b;
	b=c;
	printf("Swapped valuesa=%d b=%d",a,b);
}

