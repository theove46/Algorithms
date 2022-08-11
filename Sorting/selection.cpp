#include <stdio.h>

void selectionSort(int arr[], int n)
{
    int i, j, min, temp;

    for (i=0; i<n-1; i++)
    {
        min = i;

        for (j = i+1; j < n; j++)
          if (arr[j] < arr[min])
            min = j;

        if(min!=i)
        {
            temp = arr[min];
            arr[min] = arr[i];
            arr[i] = temp;
        }
    }

    for (i=0; i<n; i++)
        printf("%d ", arr[i]);
    printf("\n");
}

int main()
{
    int n, i;
    printf("Enter how many elements: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter elements: \n");
    for(i=0; i<n; i++)
        scanf("%d", &arr[i]);

    selectionSort(arr, n);
    return 0;
}
