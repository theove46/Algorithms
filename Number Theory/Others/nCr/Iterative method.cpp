#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long mul, n, r, i, j, x;
    cin >> n >> r;
    mul = 1;
    for(i=1; i<=r; i++)
    {
        mul *= (n-i+1);
        mul /= i;
    }
    cout << mul << endl;
    return 0;
}
