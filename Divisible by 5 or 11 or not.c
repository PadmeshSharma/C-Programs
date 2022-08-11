#include<stdio.h>
int main()
{
	int a;
	printf("Enter a number");
	scanf("%d",&a);
	if (a%5==0 && a%11==0)
	{
		printf("Divisible by 5 and 11 both");
    }
	else if(a%11==0)
		{
		printf("Divisible by 11");
	    }
	else if (a%5==0)
	{
		printf("Divisible by 5");
	}
    else 
    {
    	printf("Neither divisible by 5 nor 11");
	}
	return 0;
}
