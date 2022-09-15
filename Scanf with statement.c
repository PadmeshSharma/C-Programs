    #include <stdio.h>
    int main()
    {
        int a=2,b=3,c=4;
    	scanf("Three values are %d %d %d",&a,&b,&c);
        printf("%d %d %d",a,b,c);
        return 0;
    }
// Scanf "" inverted comma part must not include any other term than %d,%c (qualifiers) and like that. If it includes such,Scanf doesn't read the elements. Similarly,In this scanf doesn't read the value of a,b,c and thus printf prints the value of already inputted value of a b c instead of that given by user.

