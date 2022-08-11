#include<bits/stdc++.h>
using namespace std;

int dig(int n)
{
    double x = 0;
    int i;
    for(i=1; i<=n; i++)
        x += log10(i);
    return floor(x)+1;
}

int main()
{
    int n;
    while(1)
    {
        cin >> n;
        if(n==0) break;
        cout << dig(n) << endl;
    }
    return 0;
}
