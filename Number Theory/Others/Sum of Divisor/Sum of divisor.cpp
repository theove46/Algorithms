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
    ll i, j, n, sod;
    double x;
    while(1)
    {
        cin >> n;
        seive(n);
        sod = 1;
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
                sod *= (pow( (double)p[i], x ) -1) / (p[i] -1);
                //cout << p[i] << " " << (pow( (double)p[i], x ) -1.0) / (p[i] -1) << endl;

            }
            if(n==1 || n==0)
                break;
        }
        if(n!=1) sod *= (pow( (double)n, 2 ) -1) / (n -1);

        cout << "Sum of Divisors: " << sod << endl << endl;
    }
}


