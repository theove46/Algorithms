#include<bits/stdc++.h>
using namespace std;

int knapSack(int W, int wt[], int val[], int n)
{
    /*if(n==0 || W==0)
        return 0;

    if(wt[n-1]>W) return knapSack(W, wt, val, n-1);

    // Return the maximum of two cases: (1) nth item included (2) not included
    else
        return max( val[n-1] + knapSack(W - wt[n-1], wt, val, n-1), knapSack(W, wt, val, n-1));*/

    int i, j;
    int K[n+1][W+1];

    for(i=0; i<=n; i++)
    {
        for(j=0; j<=W; j++)
        {
            if(i==0 || j==0) K[i][j] = 0;
            else if(wt[i-1] <= j)
                K[i][j] = max(val[i-1] + K[i-1][j-wt[i-1]], K[i-1][j]);
            else
                K[i][j] = K[i-1][j];
        }
    }
    return K[n][W];
}

int main()
{
    int n, W, i, j, k, x;
    cin >> n;
    int val[n], wt[n];
    //int val[] = { 60, 100, 120 };
    //int wt[] = { 10, 20, 30 };
    //int W = 50;
    //int n = sizeof(val) / sizeof(val[0]);

    for(i=0; i<n; i++) cin >> val[i];
    for(i=0; i<n; i++) cin >> wt[i];
    cin >> W;
    printf("%d", knapSack(W, wt, val, n));
    return 0;
}
