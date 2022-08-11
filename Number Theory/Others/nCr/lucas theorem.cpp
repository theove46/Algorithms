#include<bits/stdc++.h>
using namespace std;

int nCrDP(int n, int r, int p)
{
    int C[r+1], i, j;
    memset(C, 0, sizeof(C));
    C[0] = 1;

    for(i=1; i<=n; i++)
    {
        for(j=min(i,r); j>0; j--)
            C[j] = (C[j] + C[j-1])%p;
    }
    return C[r];
}

int nCr(int n, int r, int p)
{
   if (r==0) return 1;
   int ni = n%p, ri = r%p;
   return (nCr(n/p, r/p, p) * nCrDP(ni, ri, p)) % p;
}

int main()
{
    //int n = 1000, r = 900, p = 13;
    int n, r, mod;
    cin >> n >> r >> mod;
    cout << "Value of nCr % mod is " << nCr(n, r, mod);
    return 0;
}
