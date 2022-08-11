#include <bits/stdc++.h>
using namespace std;

void normalSieve(int n)
{
    bool prime[n/2];
    //memset(prime, false, sizeof(prime));
    for (int i=3 ; i*i < n; i+=2)
    {
        if (prime[i/2] == false)
            for (int j=i*i; j<n; j+=i*2)
                prime[j/2] = true;
    }

    printf("2 ");

    for (int i=3; i<n ; i+=2)
        if (prime[i/2] == false)
            printf( "%d " , i );
}

int main()
{
    int n;
    cin >> n;
    normalSieve(n);
    return 0;
}
