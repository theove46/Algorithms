#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, l, mx, x, t1, t2;
    string s;
    cin >> n;
    while(n--)
    {
        cin >> s;
        l = s.length();
        x=0, mx = 0;
        int a[26]={0};
        i=0, j=0;

        while(j<l)
        {
            t1 = s[j]-97;
            a[t1]++;
            if(a[t1]==1) x++;
            if(x>mx) mx = x;
            if(a[t1]>1)
            {
                while(i<j)
                {
                    t2 = s[i]-97;
                    a[t2]--;
                    if(s[i]==s[j]) break;
                    i++;
                    x--;
                }
                i++;
            }
            //cout << "i: " << i << " " <<s[i] << " --- " << "j: " <<  j << " " << s[j] << " --- " << x << " " << mx << endl;
            j++;
        }
        cout << "Maximum length : " << mx << endl;
    }
}
