#include<stdio.h>

int gcd(int a, int b)
{
    if (b != 0)
       return gcd(b, a%b);
    else
       return a;
}

int findGCD(int arr[], int n)
{
    int result = arr[0];
    for (int i = 1; i < n; i++)
        result = gcd(arr[i], result);

    return result;
}

int main()
{
    int n, i;
    scanf("%d", &n);
    int arr[n];
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    printf("%d\n", findGCD(arr, n));
    return 0;
}
