#include <bits/stdc++.h>
using namespace std;

long long power(long long k, unsigned long long n, long long p)
{
    long long res = 1;
    k = k % p;  // Update 'a' if 'a' >= p
    while (n > 0)
    {
        // If n is odd, multiply 'a' with result
        if (n & 1)
            res = (res*k) % p;

        // n must be even now
        n = n>>1; // n = n/2
        k = (k*k) % p;
    }
    return res;
}

long long gcd(long long a, long long b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}

bool isPrime(unsigned long long n, long long k)
{
   if (n==2) return true;
   if (n <= 1 || n%2==0 )  return false;
   if (gcd(n, k) != 1)  return false;
   if (power(k, n-1, n) != 1)  return false;
   return true;

}

int main()
{
    long long t, n;
    cin >> t;
    while(t--)
    {
        cin >> n;
        if(isPrime(n, 2)) cout << "true\n";
        else cout << "false\n";
    }
    return 0;
}
