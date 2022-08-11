#include<bits/stdc++.h>
using namespace std;
#define ll long long
vector <ll> p;

void seive(ll n)
{
    p.clear();
    bool b[n/2];
    ll i, j;
    for(i=3; i*i<=n; i+=2)
    {
        if(b[i/2]==false)
        {
            for(j=i*i; j<=n; j+=i*2)
                b[j/2] = true;
        }
    }
    p.push_back(2);
    for(i=3; i*i<=n; i+=2)
        if(b[i/2]==false) p.push_back(i);
}

int main()
{
    ll i, j, n, x;
    while(1)
    {
        cin >> n;
        seive(n);
        for(i=0; i<p.size(); i++)
        {
            while(n%p[i]==0)
            {
                cout << p[i] << " ";
                n/=p[i];
            }
            if(n==1)
            {
                cout << endl;
                break;
            }
        }
        if(n!=1)
            cout << n << endl;
    }
}
