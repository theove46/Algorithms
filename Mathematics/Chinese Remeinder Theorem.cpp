#include<bits/stdc++.h>
using namespace std;

int inverse_modulo(int mi, int m)
{
    int m0, x0, x1, t, q;
    m0 = m;
    x0 = 0;
    x1 = 1;

    if(m==1)
        return 0;

    /// Apply extended Euclid Algorithm
    while (mi>1)
    {
        /// q is quotient
        q = mi/m;
        t = m;

        /// m is remainder now, process same as euclid's algo
        m = mi%m, mi=t;
        t = x0;
        x0 = x1-q*x0;
        x1 = t;
    }
    if (x1<0) /// Make x1 positive
       x1 += m0;
    return x1;
}


int main()
{
    int i, j, n, x, mi;
    cin >> n;
    int a[n], m[n];
    int totalmod = 1;
    for(i=0; i<n; i++)
    {
        cin >> m[i] >> a[i];
        totalmod *= m[i];
    }

    int result = 0;
    for(i=0; i<n; i++)
    {
        mi = totalmod / m[i];
        result += a[i] * mi * inverse_modulo(mi, m[i]);
    }
    x = result % totalmod;
    cout << x << endl;
}
