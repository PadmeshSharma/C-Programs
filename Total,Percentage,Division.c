#include<stdio.h>
int main()
{
	int m,p,c,t,per;
	printf("Enter the marks in maths,physics,chem");
	scanf("%d%d%d",&m,&p,&c);
	t=m+p+c;
	per=(t/3);
	printf("Total marks: %d",t);
	printf("Percentage: %d %",per);
	if (per>=60)
		{
		printf("1st division");
		}
	else if (m<60 && m>=45)
		{
		printf("2nd Division");
		}
	else if(m<45 && m>33) 
		{
		printf("3rd Division");
	    }
	else 
	{
		printf("Failed");	
	}
	return 0;
}
