

//To find quotient and remainder
#include<stdio.h>
int main()
{
	int q,r,a,b;
	printf("Enter two no.s to divide");
	scanf("%d%d",&a,&b);
	q=a/b;
	r=a%b;
	printf("Quotient=%d \n",q);
	printf("Remainder=%d \n",r);
}
