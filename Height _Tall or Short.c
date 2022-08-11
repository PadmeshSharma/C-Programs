#include<stdio.h>
int main()
{
	int h;
	printf("Enter your height in centimeters");
	scanf("%d",&h);
	if (h>160)
		{
		printf("Tall");
		}
	else 
		{
		printf("Short");
	    }
	return 0;
}
