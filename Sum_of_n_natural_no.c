#include<stdio.h>
int main()
{
	int n,i=1,sum=0;
	printf("Enter the n to print sum of n natural numbers.");
	scanf("%d",&n);
	for (i>0;i<=n;i++)
	{
		sum =sum+i;
	}
	printf("sum of %d natural numbrers:%d",n,sum);
	return 0;
}
