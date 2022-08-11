#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;
#define ll long long

ll solve(ll a, ll b, ll m)
{
    a %= m, b %= m;
    ll n, p, q, i, an, cur, ans;

    n = sqrt(m) + 1;

    an = 1;
    for(i=0; i<n; ++i)
        an = (an * 1ll * a) % m; //for positive number
    //cout << "***** " << an << endl;

    unordered_map<ll, ll> vals;
    for(q=0, cur = b; q<=n; q++)
    {
        vals[cur] = q;
        cur = (cur * 1ll * a) % m;
    }

    for(p=1, cur = 1; p<=n; p++)
    {
        cur = (cur * 1ll * an) % m;
        if (vals.count(cur))
        {
            ans = n * p - vals[cur];
            return ans;
        }
    }
    return -1;
}

int main()
{
    ll a, b, m, x;
    cout << "a^x = b(mod m)" << endl;
    while(1)
    {
        cin >> a >> b >> m;
        x = solve(a, b, m);
        if(x!=-1)
        {
            cout << "x = " << x << endl;
            cout << a << "^" << x << " = " << b << "(mod " << m << ")" << endl;
        }
        else cout << "Not found" << endl;
    }
}
