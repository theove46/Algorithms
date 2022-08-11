#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, tl, t, x, res;
    while(scanf("%d", &n)==1)
    {
        int a[n];
        x = 0, res=0;
        for(i=0; i<n; i++)
        {
            scanf("%d", &a[i]);
            if(a[i]==1) x++;
            res ^= a[i];
        }
        if(x==n)
        {
            if(n&1)
                printf("Player 1 win\n");
            else
                 printf("Player 2 win\n");
        }
        else
        {
            if(res==0)
                printf("Player 1 win\n");
             else
                printf("Player 2 win\n");
        }
    }
    return 0;
}


