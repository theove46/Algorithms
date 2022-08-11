#include <stdio.h>

int dToB(int n)
{
    int a[100000], i, t=0, x;
    for (i = 100000; i >= 0; i--)
    {
        int k = n >> i;
        if (k & 1)
        {
            a[t] = 1;
            t++;
        }
        else
        {
            a[t] = 0;
            t++;
        }
        //printf("%d", a[t-1]);
    }
    //printf("\n");
    for(i=0; i<=31; ++i)
    {
        if(a[i]==1)
            break;
    }
    //printf("%d\n", i);
    for(x=i; x<=31; ++x)
        printf("%d", a[x]);
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    dToB(n);
}
