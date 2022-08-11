#include<bits/stdc++.h>
using namespace std;

int partition_arr(int arr[], int low, int high)
{
    int pivot, i, j, t;
    pivot = arr[high];

    for(i=low-1, j=low; j<high; j++)
    {
        if(arr[j]<pivot)
        {
            i+=1;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[high], arr[i+1]);
    return (i+1);
}

void quicksort(int arr[], int low, int high)
{
    if(low<high)
    {
        int p;
        p = partition_arr(arr, low, high);
        quicksort(arr, low, p-1);
        quicksort(arr, p+1, high);
    }
}

int main()
{
    int n, i;
    cin >> n;
    int arr[n];
    for(i=0; i<n; i++) cin >> arr[i];
    quicksort(arr, 0, n-1);
    for(i=0; i<n; i++) cout << arr[i] << " ";
    return 0;
}
