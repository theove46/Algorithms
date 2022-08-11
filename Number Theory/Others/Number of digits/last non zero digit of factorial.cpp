#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll pwo(ll n)
{
    ll t[] = {6, 2, 4, 8};
    if(n==0) return 1;
    else return t[n%4];
}

ll lastdigit(ll n)
{
    ll a[] = {1, 1, 2, 6, 4}, x;
    if(n<5) return a[n];
    x = ( pwo(n/5) * lastdigit(n/5) * lastdigit(n%5) ) % 10;
    return x;
}
int main()
{
    ll n, lg;
    while(cin >> n)
    {
        if(n==0) break;
        lg = lastdigit(n);
        cout << lg << endl;
    }
    return 0;
}
