#include <stdio.h>
int main()
{
    int n1, n2, i, x, gcd;
    printf("Enter two integers: ");
    scanf("%d %d", &n1, &n2);
    if(n1<n2)
        x = n1;
    else
        x = n2;

    for(i=1; i<=x; ++i)
    {
        if(n1%i==0 && n2%i==0)
            gcd = i;
    }
    printf("G.C.D is %d", gcd);
    return 0;
}
