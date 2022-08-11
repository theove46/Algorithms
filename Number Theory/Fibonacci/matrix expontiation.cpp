#include<bits/stdc++.h>
using namespace std;
#define ll unsigned long long

void multiply(ll F[2][2], ll M[2][2])
{
    ll x, y, z, w;
    x =  F[0][0] * M[0][0] + F[0][1] * M[1][0];
    y =  F[0][0] * M[0][1] + F[0][1] * M[1][1];
    z =  F[1][0] * M[0][0] + F[1][1] * M[1][0];
    w =  F[1][0] * M[0][1] + F[1][1] * M[1][1];

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(ll F[2][2], ll n)
{
    if (n == 0 || n == 1)
        return;

    ll M[2][2] = {{1,1},{1,0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
        multiply(F, M);
}

ll matrix(ll n)
{
    ll F[2][2] = {{1,1},{1,0}};

    if (n == 0)
        return 0;

    power(F, n - 1);
    return F[0][0];
}

int main()
{
    long long n;
    while (1)
    {
        cin>>n;
        if (n < 0)
            break;

        cout << matrix(n) << endl<< endl;
    }
    return 0;
}
