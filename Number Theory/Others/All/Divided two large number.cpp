#include<bits/stdc++.h>
using namespace std;

int main()
{
    int T,rem, q[100], tm;
    long long int b, i, l, n, k, j, x;
    //cin>> t;
    string s;
    //for(i=1; i<=T; i++)
    {
        cin>>s>>b;
        l = s.length();
        if(s[0]=='-')
            j=1;
        else
            j=0;

        if(b<0)
            b = b*(-1);

        n=0, tm=0;
        for(k=j; k<l; k++)
        {
            n = n*10 + (s[k]-'0');

            x = n/b;
            q[tm]= x, tm++;

            n=n%b;
        }
        cout << "Remainder : " << n << "\n";
        cout << "Quotient : ";
        // Flag used to remove starting zeros
        bool b = 0;
        for (int i = 0; i < tm; i++)
        {
            if (q[i] == 0 && b == 0)
                continue;
            b = 1;
            cout << q[i];
        }
        cout << endl;
    }
    return 0;
}
