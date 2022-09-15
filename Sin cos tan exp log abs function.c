#include<stdio.h>
#include<math.h>
int main()
{
	int x;
	float a,b,c,d,e,f;
	printf("Enter number");
	scanf("%d",&x);
	a=sin(x);
	b=cos(x);
	c=tan(x);
	d=exp(x);
	e=log(x);
	f=abs(x);
	printf("%f %f %f %f %f %f",a,b,c,d,e,f);
	return 0;
} 
