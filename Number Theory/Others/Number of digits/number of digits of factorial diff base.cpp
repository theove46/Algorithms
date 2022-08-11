#include<bits/stdc++.h>
using namespace std;

int dig(int n, int base)
{
    double x = 0;
    int i;
    for(i=1; i<=n; i++)
        x += (log10(i)/log10(base));
    return floor(x)+1;
}

int main()
{
    int n, base;
    while(1)
    {
        cin >> n >> base;
        if(n==0) break;
        cout << dig(n, base) << endl;
    }
    return 0;
}

