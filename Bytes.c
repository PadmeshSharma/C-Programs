#include<stdio.h>
int main()
{
	int a = 7; //2 to 4 bytes
	unsigned short integer = 8; //2 bytes
	long integer1 = 8; //4 bytes
	short integer2 = 8; //2 bytes
	
	float b = 8.8; //4 bytes - 6 decimal precision
	double myfloat1 = 7.45; // 8 bytes - 15 decimal places precision
	long double myfloat = 7.43453455; //10 bytes - 19 decimal places precision
	
	char c = 't'; //1 byte
	printf("The size taken by int is %d\n",sizeof(int));
	printf("The size taken by int is %d\n",sizeof(unsigned int));
	printf("The size taken by int is %d\n",sizeof(float));
	printf("The size taken by int is %d\n",sizeof(double));
	printf("The size taken by int is %d\n",sizeof(long double));
	return 0;
 } 
