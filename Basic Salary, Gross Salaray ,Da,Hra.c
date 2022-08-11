#include<stdio.h>
int main()
{
	int bs,a,b,c;
	printf("Enter the Basic Salary");
	scanf("%d",&bs);
	if (bs>0 && bs <= 10000)
	{
	 a =bs+(0.2*bs)+(0.8*bs);
		printf("Gross Salary is %d",a);
    }
	else if (bs>10000 && bs <= 20000 )
	{
	 b =bs+(0.25*bs)+(0.9*bs);
		printf("Gross Salary is %d",b);
	}
    else if (bs > 20000)
    {
     c =bs+(0.3*bs)+(0.95*bs);
    	printf("Gross Salary is %d",c);
    }
	return 0;
}
