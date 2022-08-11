#include<bits/stdc++.h>
using namespace std;

long long prime = 1000000007;

void rabinkarp(string str, string pat)
{
    long long m, n, i, j, x, hash1, hash2, pw;
    n = str.length();
    m = pat.length();
    hash1 = 0, hash2 = 0;

    for(i=0; i<m; i++)
    {
        x = pat[i]-96;
        hash1 = ((hash1*10) + x) % prime;
        //cout << hash1 << endl;
    }
    cout << "Hash1 : " << hash1 << endl;

    pw = pow(10, m);
    long long hs[n];
    for(i=0; i<=n-m; i++)
    {
        if(i==0)
        {
            for(j=0; j<m; j++)
            {
                x = str[j]-96;
                hs[j] = x;
                hash2 = (hash2*10 + x) % prime;
                //cout << "arr : " <<  hs[j] << "  val : " << hash2 << "  pos : " << j+1 << endl;
            }
        }
        else
        {
            x = str[i+m-1]-96;
            hs[i+m-1] = x;
            hash2 = (hash2*10 + x);
            hash2 = hash2 - (hs[i-1]* pw) % prime;
            //cout << "arr : " <<  hs[i+m-1] << "  val : " << hash2 << "  pos : " << i+m << endl;
        }
        if(hash1 == hash2)
            cout << "pattern found in index : " << i+1 << endl;
    }
}

int main()
{
    string str, pat;
    int n, x;
    cin >> n;
    while(n--)
    {
        cin.get();
        getline(cin, str);
        cin >> pat;
        rabinkarp(str, pat);
    }
}
