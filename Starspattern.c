#include<stdio.h>
int main()
{
	int a,i=1,n,stars;
	printf("Enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		stars=1;
		while(stars<=i)
		{
			printf("*");
			stars++;
		}
		printf("\n");
		i++;
	}
}
