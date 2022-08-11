#include<stdio.h>
int main()
{
	int a;
	printf("Enter your age");
	scanf("%d",&a);
	if (a>0 && a<=20)
		{
		printf("Person is young");
		}
	else if (a>20 && a<40)
		{
		printf("Person is middle aged");
	    }
	else 
		{
		printf("Person is old");
		}
	return 0;
}
