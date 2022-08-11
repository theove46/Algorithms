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
    ll i, j, n, x, nod;
    while(1)
    {
        cin >> n;
        seive(n);
        nod = 1;
        for(i=0; i<p.size() && p[i]<=sqrt(n); i++)
        {
            if((n%p[i])==0)
            {
                x = 1;
                while(n%p[i]==0)
                {
                    x++;
                    n/=p[i];
                }
                nod*=x;
            }
                if(n==1 || n==0)
                    break;
        }
        if(n!=1) nod*=2;

        cout << "Number of Divisors: " << nod << endl << endl;
    }
}

