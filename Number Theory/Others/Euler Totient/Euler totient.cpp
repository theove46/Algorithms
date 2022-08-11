#include<stdio.h>
int totient (int i)
{
    int ans;
    int j;
    if(i==1) return 1;

    ans=i;
    if (i%2==0)
    {
        ans -= ans/2;
        while (i%2==0)
            i/=2;
    }

    for(j=3; j*j<=i; j+=2)
    {
        if(i%j==0)
        {
            ans-=ans/j;

            while(i%j==0)
                i/=j;
        }
    }
    if (i>1) ans -= ans/i;
    return ans;
}

int main()
{
    int in;
    while(scanf("%d", &in))
        printf("Phi(%d) = %d\n", in, totient(in));
    return 0;
}
