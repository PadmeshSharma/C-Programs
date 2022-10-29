#include<stdio.h>
int main()
{
	int n,i=1,sum=0,value;
	printf ("Enter n ");
	scanf ("%d",&n);
	
	while (i<=n)
	{
		printf("Enter no.");
		scanf("%d",&value);
		sum=sum+value;
		i++;
	}
	printf("Sum is %d",sum);
	return 0;
}
