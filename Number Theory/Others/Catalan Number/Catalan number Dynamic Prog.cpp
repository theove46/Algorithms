#include<iostream>
using namespace std;

unsigned long long int catalanDP(unsigned int long n)
{
    unsigned long long int catalan[n+1];
    catalan[0] = catalan[1] = 1;

    for (int i=2; i<=n; i++)
    {
        catalan[i] = 0;
        for (int j=0; j<i; j++)
            catalan[i] += catalan[j] * catalan[i-j-1];
    }
    return catalan[n];
}

int main()
{
    int num;
    cin >> num;
    for (int i = 0; i <=num; i++)
        cout << i << " : \t" << catalanDP(i) << endl;
    return 0;
}
