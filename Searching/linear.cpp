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

    for(i=0; i<n; i++)
    {
        if(arr[i]==key)
        {
            printf("Item found at location: %d\n", i+1);
            break;
        }
    }
    if(i==n)
        printf("Item is not found in the list.\n");
    return 0;
}
