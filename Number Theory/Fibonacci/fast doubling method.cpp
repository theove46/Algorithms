#include<bits/stdc++.h>
using namespace std;
#define MOD 1000000007;
#define ll long long
ll a,b,c,d;

void fast_fib(ll n,ll ans[])
{
    if(n == 0){
                ans[0] = 0;
                ans[1] = 1;
                return;
    }
        fast_fib(n/2,ans);

        a = ans[0];      // F(n)
        b = ans[1];     // F(n+1)
        c = 2*b - a;      // [2*F(n+1) – F(n)]

        c = (a * c) % MOD;                //  F(2n)
        d = (a*a + b*b) % MOD;       // F(2n+1)

        if(n%2 == 0){
            ans[0] = c;
            ans[1] = d;
        }
        else{
            ans[0] = d;
            ans[1] = c+d;
        }

}

int main()
{
    ll n;        /* nth value to be found */
    while(1)
    {
    scanf("%lld",&n);
    ll ans[2]={0};

    fast_fib(n,ans);
    printf("%lld\n", ans[0]);
    }

    return 0;
}
