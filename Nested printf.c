    #include <stdio.h>
    int main()
    {
        int i = 10, j = 2;
        printf("%d\n", printf("%d %d ", i, j));
    }
// Here, inner printf prints 10 2 (1,0,space,2,space i.e, 5 terms) so the outer printf prints 5 (no. of terms printed by inner printf).
