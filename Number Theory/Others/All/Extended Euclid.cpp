#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll ext_euclid(ll a, ll b, ll &X, ll &Y)
{
    if (b == 0)
    {
        X = 1;
        Y = 0;
        return a;
    }

    ll xx, yy;
    ll g = ext_euclid(b, a%b, xx, yy);

    X = yy;
    Y = xx-yy*(a/b);
    return g;
}

int main()
{
    ll a, b, x, y, gcd;
    cin >> a >> b;
    gcd = ext_euclid(a, b, x, y);
    cout << x << " " << y << " " << gcd << endl;
    return 0;
}
