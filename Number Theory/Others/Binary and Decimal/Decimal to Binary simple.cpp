#include <stdio.h>
long long DToB(int n);
int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", DToB(n));
    return 0;
}
long long DToB(int n)
{
    long long binary = 0;
    int remainder, i = 1, step = 1;
    while (n!=0)
    {
        remainder = n%2;
        //printf("Step %d: %d/2, Remainder = %d, Quotient = %d\n", step++, n, remainder, n/2);
        n = n/2;
        binary = binary + remainder*i;
        i = i * 10;
    }
    return binary;
}
