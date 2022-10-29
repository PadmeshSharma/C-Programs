#include<stdio.h>
int main()
{
	int a,i=1,n,spaces,stars;
	printf("Enter n");
	scanf("%d",&n);
	while(i<=n)
	{
		spaces=1;
		while(spaces<=n-i)
		{
			printf(" ");
			spaces++;
		}
		stars=1;
		while(stars<=2*i-1)
		{
			printf("*");
			stars++;
		}
		printf("\n");
		i++;
	}
return 0;
}

