#include<bits/stdc++.h>
using namespace std;

int lis( int arr[], int n )
{
    int lis[n], i, j, mx=1;
    lis[0] = 1;
    for(i=1; i<n; i++)
    {
        lis[i] = 1;
        for(j=0; j<i; j++)
        {
            if( arr[i]>arr[j] && lis[i]<lis[j]+1)
                lis[i] = lis[j]+1;
        }
        if(lis[i]>mx) mx = lis[i];
    }
    return mx;
}

int main()
{
    //int arr[] = { 10, 22, 9, 33, 21, 50, 41, 60 };
    //int n = sizeof(arr)/sizeof(arr[0]);
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    printf("Length of lis is: %d\n", lis(arr, n));
    return 0;
}
