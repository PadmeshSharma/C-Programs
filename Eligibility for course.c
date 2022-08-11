#include<stdio.h>
int main()
{
	int m,p,c,t;
	printf("Enter the marks in maths,physics,chem");
	scanf("%d%d%d",&m,&p,&c);
	t=m+p+c;
	if (t>=180)
		{
		printf("Eligible for course");
		}
	else if (m>=65)
		{
		printf("Eligible for course");
		}
	else if(p>=55) 
		{
		printf("Eligible for course");
	    }
	else if(c>=50) 
		{
		printf("Eligible for course");
	    }
	else 
	{
		printf("Not eligible for course");	
	}
	return 0;
}
