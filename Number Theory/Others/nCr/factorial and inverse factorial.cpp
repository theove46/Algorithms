#include<bits/stdc++.h>
using namespace std;

unsigned long long fact[1005], inv[1005];

unsigned long long mod_inverse(unsigned long long x, int y, int p)
{
    unsigned long long res = 1;
    x = x % p;

    while(y>0)
    {
        if(y&1) res = (res * x) % p;
        y = y/2;
        x = (x*x)%p;
    }
    return res;
}

int main()
{
    unsigned long long n, r, i, mod, ncr_mod;
    cin >> n >> r >> mod;
    fact[0] = inv[0] = 1;

    for(i=1; i<=n; i++) fact[i] = (fact[i-1]*i) % mod;
    inv[n] = mod_inverse(fact[n], mod-2, mod) % mod;
    for(i=n-1; i>=1; i--) inv[i] = (inv[i+1]*(i+1)) % mod;

    //for(i=0; i<=n; i++) cout << i << "  " << fact[i] << endl;
    //for(i=0; i<=n; i++) cout << i << "  " << inv[i] << endl;

    ncr_mod = fact[n]%mod * inv[r]%mod * inv[n-r]%mod;
    cout << ncr_mod << endl;
    return 0;
}
