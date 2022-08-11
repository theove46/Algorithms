#include <bits/stdc++.h>
using namespace std;

#define n 10000000

vector <long long int> s, sg, segment;
long long int prm[n], k;
bool a[n];

long long int prime()
{
    long long i, j;
    a[0] = a[1] = 1;

    //for(i=4;i<=n;i=i+2)
        // a[i]=1;

    for(i=3; i*i<=n; i+=2)
    {
        for(j=i*i; j<=n; j+=2*i)
            a[j] = 1;
    }

    prm[0] = 2;
    k = 1;        /// k==0, means prm[0] is filled
    for(i=3; i<=n; i+=2)
    {
        if(a[i]==0)
        {
            prm[k]=i;
            //cout<<p[k]<<endl;
            k++;
        }
    }
}

void segmented_sieve(long long int l, long long int u)
{
    long long int root, start, i, j, si;

    root = sqrt(u) + 1;

    for(i=l; i<=u; i++)
        sg.push_back(i);

    if(l==0)
        sg[1]=0;     /// sg[1] = 1, which is non prime

    else if(l==1)    /// sg[0] = 1, which is non prime
        sg[0]=0;

    for(i=0; prm[i] <= root; i++)
    {
        si = prm[i];

        start = si*si;

        if(start < l)
            start= ((l + si-1) / si) * si;

        for(j=start; j<=u; j+=si)
            sg[j-l] = 0;
    }
}

int main()
{
    long long int t, tl, l, u, i;

    prime();

    cin>>t;

    for(tl=1; tl<=t; tl++)
    {
        cin >> l >> u;
        segmented_sieve(l, u);

        for(i=l; i<=u; i++)
        {
            if(sg[i-l]!=0)
                segment.push_back(sg[i-l]);
        }

        for(i=0; i<segment.size(); i++)
            cout<<segment[i]<<endl;

        segment.clear();
        sg.clear();
        cout<<endl;
     }
    return 0;
}
