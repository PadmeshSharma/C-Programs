#include<stdio.h>
int main()
{
	int num; 
	printf("Enter the number whose multiplication table is to be printed\n");
	scanf("%d",&num);
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d * %d = %d\n ", num, i+1, (i+1)*num);
	}
	return 0;
 } 
