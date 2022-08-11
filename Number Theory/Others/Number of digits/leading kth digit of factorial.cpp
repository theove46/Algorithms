
#include<bits/stdc++.h>
using namespace std;
const double eps = 1e-9;
int dig(int n, int k)
{
    double b, q, fact;
    int i;
    fact = 0;
    for(i=1; i<=n; i++)
        fact += log10(i);
    q = fact - floor(fact+eps);
    b = pow(10, q);
    for(i=1; i<=k-1; i++)
        b *= 10;
    return floor(b+eps);
}

int main()
{
    int n, k;
    while(1)
    {
        cin >> n >> k;
        if(n==0) break;
        cout << dig(n, k) << endl;
    }
    return 0;
}

