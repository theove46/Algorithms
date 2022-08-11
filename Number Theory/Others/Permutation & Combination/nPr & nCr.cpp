#include<bits/stdc++.h>
using namespace std;

int fact(int num)
{
    if(num==1)
        return 1;
    else
        return num * fact(num-1);
}

int main()
{
    unsigned long long int n, r, nPr, nCr;

    while(1)
    {
        cin >> n >> r;
        nPr = fact(n)/fact(n-r);
        nCr = nPr/fact(r);
        cout << "nPr: " << nPr << endl;
        cout << "nCr: " << nCr << endl;
    }
    return 0;
}
