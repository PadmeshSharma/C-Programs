//Finding Simple Interest and Compound Interest 
#include<stdio.h>
#include<math.h>
int main()
{
	int p,t,a,b,s;
	float r,c;
	printf("Enter principal amount,rate of interest and time");
	scanf("%d%f%d",&p,&r,&t);
	s=(p*r*t)/100;
    a=p*pow((1+r/100),t);
	c=b-s;
	printf("Simple Interest=%d",s);
	printf("Compound Interest is %f \n",c);
}
