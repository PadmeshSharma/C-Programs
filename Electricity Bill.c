#include<stdio.h>
int main()
{
	int u,b,c,d,e;
	printf("Enter electricity units");
	scanf("%d",&u);
	b=25+(0.75*(u-50));
	c=100+(1.2*(u-150));
	d=220+(1.5*(u-250));
    e=1.2*d;
	if (u>0 && u<=50)
	{
		printf("Total electricity bill is of %d Rs",u/2);
    }
	else if (u >50 && u<= 150 )
	{
	 	printf("Total electricity bill is of %d Rs",b);
	}
    else if (u>150 && u<= 250 )
    {
    	printf("Total electricity bill is of %d Rs",c);
    }
    else if(u>250)
    {
    	printf("Total electricity bill is of %d Rs",e);
	}
	return 0;
}
