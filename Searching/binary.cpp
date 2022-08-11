#include<stdio.h>

int main()
{
    int n, key, i;
    printf("Enter number of items: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter items: \n");
    for(i = 0; i< n; i++)
    {
       scanf("%d", &arr[i]);
    }

    printf("Enter the key: ");
    scanf("%d", &key);

    int start=0, end=n-1, mid, loc;
    while(start<=end)
    {
        mid = (start + end)/2;

        if(arr[mid]==key)
        {
            loc = mid;
            break;
        }
        else if(arr[mid]<key)
            start = mid + 1;
        else
            end = mid - 1;
    }

    if(loc>=0 && loc<n)
        printf("Item found in location: %d\n", loc+1);
    else
        printf("Item not found\n");

    return 0;
}
