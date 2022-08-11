#include<bits/stdc++.h>
using namespace std;

int dp[100005][2][2], arr[100005], n;

int func(int pos, int flag, int prv)
{
    if(pos>=n) return 0;

    cout << "**** pos: " << pos << " flag: " << flag << " prv: " << prv <<  "  " << dp[pos][flag][prv] << endl;
    if((dp[pos][flag][prv])!=-100005) return dp[pos][flag][prv];

    int val1, val2;
    if(prv==0)
    {
        if(flag==1) val1 = func(pos+1, 0, 1) + arr[pos];
        else /*if(flag==0)*/ val1 = func(pos+1, 1, 1) - arr[pos];
    }
    else //if(prv==1)
        val2 = func(pos+1, flag, 0);

    cout << "**** **** " << val1 << "  " << val2 << endl;

    cout << "**** pos: " << pos << " flag: " << flag << " prv: " << prv <<  "  " << dp[pos][flag][prv] << endl;

    return dp[pos][flag][prv] = max(val1, val2);
}

int main()
{
    int t, i, sum;
    cin >> t;
    while(t--)
    {
        sum = 0;
        cin >> n;
        for(i=0; i<n; i++)
        {
            cin >> arr[i];
            dp[i][0][0] = -100005;
            dp[i][0][1] = -100005;
            dp[i][1][0] = -100005;
            dp[i][1][1] = -100005;
        }
        sum = func(0, 1, 0);
        cout << sum << endl;
    }
    return 0;
}
