#include<bits/stdc++.h>
using namespace std;

int binary_search(vector < pair<int, pair<int, int> > > vec, int i, int n)
{
    int lo, hi, mid, x;
    lo=i+1, hi=n-1;
    x = vec[i].second.first;
    while(lo<=hi)
    {
        mid = (lo+hi)/2;
        if(vec[mid].first<=x) lo = mid+1;
        else if(vec[mid].first>x)
        {
            if(vec[mid-1].first>x) hi = mid-1;
            else return mid;
        }
    }
    return -1;
}

int find_profit(vector < pair<int, pair<int, int> > > vec, int i, int dp[], int n)
{
    if(i>=n) return 0;
    //if(dp[i]!=-1) return vec[i].second.second;
    int x, bin, v1, v2;

    x = vec[i].second.second;
    bin = binary_search(vec, i, n);

    v1 = find_profit(vec, i+1, dp, n);

    if(bin!=-1) v2 = find_profit(vec, bin, dp, n) + x;
    else v2 = x;

    vec[i].second.second = max(v1, v2);
    dp[i] = 0;
    //cout << "i " << i << " " << vec[i].second.second << endl;
    return vec[i].second.second ;
}

int main()
{
    int t, n, i, j, st, en, pr, max_profit;
    cin >> t;
    while(t--)
    {
        cin >> n;
        vector < pair<int, pair<int, int> > > myvec;
        int dp[n];
        for(i=0; i<n; i++)
        {
            cin >> st >> en >> pr;
            myvec.push_back(make_pair(st, make_pair(en, pr)));
            dp[i] = -1;
        }
        sort(myvec.begin(), myvec.end());
        max_profit = find_profit(myvec, 0, dp, n);
        cout << "Maximum Profit = " << max_profit << endl;
    }
    return 0;
}
