#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age");
	scanf("%d",&age);
	if (age>0 && age<18)
		{
		printf("Not eligible for casting his/her own vote");
		}
	else 
		{
		printf("Eligible for casting his/her own vote");
	    }
	return 0;
}
