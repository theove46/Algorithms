#include <stdio.h>

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

long long findlcm(int arr[], int n)
{
    long long ans = arr[0];

    for (int i = 1; i < n; i++)
        ans = (((arr[i] * ans)) / (gcd(arr[i], ans)));

    return ans;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("%lld", findlcm(arr, n));
    return 0;
}
