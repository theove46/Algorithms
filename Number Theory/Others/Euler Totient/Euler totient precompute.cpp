#include <stdio.h>

#define MAX 2000100
int phi[MAX] ;

void sievePHI()
{
    long long i, j;

    for(i=1; i<MAX; i++) phi[i]=i;

    for(i=2; i<MAX; i++)
    {
        if(phi[i]==i)
        {
            for(j=i; j<MAX; j+=i)
                phi[j] -= (phi[j]/i);
        }
    }
}

int main()
{
    int T;
    scanf("%d", &T);
    sievePHI();
    while (T--)
    {
        int in;
        scanf("%d", &in);
        printf("Phi(%d) = %d\n", in, phi[in]);
    }
    return 0;
}
