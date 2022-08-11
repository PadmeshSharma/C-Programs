#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if (a<30)
		{
		printf("Cube of this no. is %d",(a*a*a));
		}
	else if(a>=30 && a<40)
		{
		printf("Square of this no. is %d",(a*a));
	    }
	else 
	{
		printf("Half of this no. %d",(a/2));
    }
	return 0;
}
