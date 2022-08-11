#include<stdio.h>
int main()
{
	int m;
	printf("Enter the integer m");
	scanf("%d",&m);
	if (m>0)
		{
		printf("n=1");
		}
	else if (m==0)
		{
		printf("n=0");
		}
	else if(m<0) 
		{
		printf("n=-1");
	    }
	return 0;
}
