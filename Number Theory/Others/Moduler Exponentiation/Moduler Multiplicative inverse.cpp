#include<bits/stdc++.h>
using namespace std;

#define p 1000000007
#define ll long long

ll bigmod(ll a, ll b, ll m)
{
    ll res, x;
    res = 1 % m;
    x = a % m;
    while(b)
    {
        if(b&1) res = (res * x) % m;
        x = (x * x) % m;
        b/=2;
    }
    return res;
}

int main()
{
    ll a, b, m, s, bg;
    cin >> a >> b >> m;
    bg = bigmod(b, m-2, m);
    cout << bg << endl;
    s = ( (a%m) * (bg%m) ) % m;
    cout << s << endl;
    return 0;
}
