#include <stdio.h>
int main()
{
    int n, n1, i, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n, &n1);
    for(i=1; i <= n && i <= n1; ++i)
    {
        if(n%i==0 && n1%i==0)
            gcd = i;
    }
    printf("G.C.D of %d and %d is %d", n, n1, gcd);
    return 0;
}
