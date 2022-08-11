#include<bits/stdc++.h>
using namespace std;

int dp[1005][1005];
string s;
pair <int, int> nxt[1005][1005];

int func(int st, int en)
{
    if(st==en) return 1;
    if(st>en) return 0;
    if(dp[st][en]!=-1) return dp[st][en];

    if(s[st]==s[en])
    {
        nxt[st][en] = {st+1, en-1};
        return dp[st][en] = func(st+1, en-1)+2;
    }
    else
    {
        int v1 = func(st+1, en);
        int v2 = func(st, en-1);

        if(v1>v2) nxt[st][en] = {st+1, en};
        else nxt[st][en] = {st, en-1};

        return dp[st][en] = max(v1, v2);
    }
}


int main()
{
    int t, i, j, n, x;
    cin >> t;
    while(t--)
    {
        cin >> s;
        n = s.length();

        for(i=0; i<n; i++)
        {
            for(j=0; j<n; j++)
            {
                dp[i][j] = -1;
            }
        }

        x = func(0, n-1);
        cout << "maximun length: " << x << endl;
    }
    return 0;
}




