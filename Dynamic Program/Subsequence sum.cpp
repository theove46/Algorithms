#include<bits/stdc++.h>
using namespace std;

int dp[100005][2], arr[100005], n;

int func(int pos, int prv)
{
    if(pos>=n) return 0;
    int val1, val2;
    if(dp[pos][prv]!=-1) return dp[pos][prv];
    if(prv==0)
    {
        val1 = func(pos+1, 1) + arr[pos];
        val2 = func(pos+1, 0);
        return dp[pos][prv] = max(val1, val2);
    }
    else
    {
        int val2 = func(pos+1, 0);
        return dp[pos][prv] = val2;
    }
}

int main()
{
    int t, i, j, x, sum;
    cin >> t;
    while(t--)
    {
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            dp[i][0]=-1;
            dp[i][1]=-1;
        }
        //for(i=0; i<n; i++) dp[i][0] = -1, dp[i][1] = -1;
        sum = func(0, 0);
        cout << sum << endl;
    }
}
