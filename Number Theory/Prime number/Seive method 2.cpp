#include <stdio.h>
#include<math.h>
int all[10001];
int prime()
{
    //int all[1001];
    int i, j, k;

    k = sqrt(10000) + 1;

    for(i=0; i<=10000; i++)
    {
        all[i] = 1;
    }
    all[0]=0, all[1]=0;

        for(i=2; i<k; i++)
        {
            for(j=2*i; j<=10000; j+=i)
            {
                all[j] = 0;
            }
        }
}

int main()
{
    int n, i;
    prime();
    scanf("%d", &n);
    for(i=0; i<=n; i++)
    {
        if(all[i]==1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

