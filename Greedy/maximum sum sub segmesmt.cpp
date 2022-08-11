#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, i, j, mx, mn, sum;
    cin >> n;
    int a[n], cmsum[n];
    sum = 0;
    for(i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
        cmsum[i] = sum;
    }
    mn = 0, mx = 0;
    for(i=0; i<n; i++)
    {
        sum  = cmsum[i] - mn;
        if(cmsum[i]<mn) mn = cmsum[i];
        else if(sum>mx) mx = sum;
        cout << mx << " ";
    }
    cout << endl << mx << endl;
    return 0;
}
