#include<stdio.h>
int main()
{
	int n,i=2;
	printf("Enter the number to check if it is prime or not.");
	scanf ("%d",&n);
	while (i<n)
	{
		if(n%i==0)
		{
			printf("%d IS NOT PRIME",n);
			return 0;
		}
		i++;
	}
	printf("%d IS PRIME",n);
		
	return 0;
}
