#include<stdio.h>

int Search(int array[], int start, int end, int key)  //at starting start=0, end=n-1
{
    int mid1, mid2;
    if(start <= end)
    {
        mid1 = (start + (end - start) /3);  //mid of first and second block
        mid2 = (mid1 + (end - start) /3);  //mid of first and second block

        if(array[mid1] == key)
            return mid1;
        else if(array[mid2] == key)
            return mid2;

        else if(key < array[mid1])
            return Search(array, start, mid1-1, key);  //again recursion function call between 1st part

        else if(key > array[mid2])
            return Search(array, mid2+1, end, key);  //again recursion function call between 2nd part

        else
            return Search(array, mid1+1, mid2-1, key);  //again recursion function call between 3rd part
   }
   return -1;
}

int main()
{
   int n, key, loc;
   printf("Enter number of items: ");
   scanf("%d", &n);
   int arr[n];

   printf("Enter items: \n");
   for(int i = 0; i< n; i++)
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
