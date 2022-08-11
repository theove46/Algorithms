#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long m)
{
    if(m==0) return a;
    else return gcd(m, a%m);
}

long long power(long long x, unsigned long long y, unsigned long long m)
{
    if(y==0) return 1;

    long long p = power(x, y / 2, m) % m;
    p = (p * p) % m;

    if(y%2==0) return p;
    else return (x*p)%m;
    //return (y % 2 == 0) ? p : (x * p) % m;
}

void modInverse(long long a, long long m)
{
    if (gcd(a, m)!=1)
        cout << "Inverse doesn't exist" << endl;
    else
        cout << "Modular multiplicative inverse is " << power(a, m - 2, m) << endl;
}

int main()
{
    long long a, m, n;
    cin >> n;
    while(n--)
    {
        cin >> a >> m;
        modInverse(a, m);
    }
    return 0;
}
