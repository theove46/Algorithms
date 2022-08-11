#include<stdio.h>

int Search(int array[], int start, int end, int key)  //at starting start=0, end=n-1
{
    int mid;
    if(start <= end)
    {
        mid = (start+end)/2;

        if(array[mid] == key)
            return mid;

        else if(key < array[mid])
            return Search(array, start, mid-1, key);

        else
            return Search(array, mid+1, end, key);
   }
   return -1;
}

int main()
{
    int n, key, i, loc;
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

    if((loc = Search(arr, 0, n-1, key)) >= 0)
        printf("Item found at location: %d\n", loc+1);

   else
        printf("Item is not found in the list.\n");
}
