#include<stdio.h>
int main()
{
	int a,i;
	printf("Enter the no.");
	scanf("%d",&a);
	/*	
	i=a;
	while(i>0)
	{
	printf("%d\n",i);
	i--;
	}
	*/
	for(i=a;i>=1;i--)
	{
		printf("%d\n",i);
	}
	return 0;
}
