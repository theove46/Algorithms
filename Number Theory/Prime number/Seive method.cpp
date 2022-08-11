#include <stdio.h>
#include<math.h>

int prime(int n)
{
    int all[n+1];
    int i, j, k;

    k = sqrt(n) + 1;

    for(i=0; i<=n; i++)
        all[i] = 1;

    all[0]=0, all[1]=0;

        for(i=2; i<k; i++)
        {
            for(j=2*i; j<=n; j+=i)
            {
                all[j] = 0;
            }
        }

    for(i=0; i<=n; i++)
    {
        if(all[i]==1)
            printf("%d ", i);
    }
    printf("\n");
}

int main()
{
    int n;
    scanf("%d", &n);
    prime(n);
    return 0;
}
