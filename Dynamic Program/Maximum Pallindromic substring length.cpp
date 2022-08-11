#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
string s;

int func(int st, int en)
{
    if(st>=en) return 1;
    if(dp[st][en]!=-1) return dp[st][en];

    if(s[st]==s[en])
        return dp[st][en] = func(st+1, en-1);
    else
        return dp[st][en] = 0;
}

int main()
{
    int t, i, j, mx, n, x, ss, se, l;
    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.length();
        mx = 0;

        for(i=0; i<n; i++)
            for(j=0; j<n; j++)
                dp[i][j] = -1;

        for(i=0; i<n; i++)
        {
            for(j=i; j<n; j++)
            {
                x = func(i, j);
                if(x==1)
                {
                    l = j-i+1;
                    if(l>mx)
                    {
                        mx = l;
                        ss = i, se = j;
                    }
                }
            }
        }
        cout << "point : " << mx << " ";
        for(i=ss; i<=se; i++) cout << s[i];
        cout << endl;
    }
    return 0;
}

