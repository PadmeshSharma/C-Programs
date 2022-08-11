#include<stdio.h>
int main()
{
	int c,m,s;
	printf("Enter Cost_price,Maintenance,Selling_price");
	scanf("%d%d%d",&c,&m,&s);
	if (s==c+m)
		{
		printf("No profit no loss");
		}
	else if (s>c+m)
		{
		printf("Profit");
	    }
	else if (s<c+m)
		{
		printf("Loss");
	    }
	return 0;
}
