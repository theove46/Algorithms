#include <bits/stdc++.h>
using namespace std;

void Winner(int A[], int n)
{
    int res = 0, i, x=0;
    for (i = 0; i < n; i++)
    {
        if(A[i]==1) x++;
        res ^= A[i];   // XOR operation
    }
    //printf("XOR : %d\n", res);
    if(x==n)
    {
        if(x&1) printf("Alice Win\n");
        else printf("Bob Win\n");
    }
    else if (res == 0 || n % 2 == 0)
        printf("Alice Win\n");
    else
        printf("Bob Win\n");
}

int main()
{
    int n, i;
    while(scanf("%d", &n)==1)
    {
        int a[n];
        for(i=0; i<n; i++) scanf("%d", &a[i]);
        Winner(a, n);
    }
    return 0;
}
