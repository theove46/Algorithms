#include<bits/stdc++.h>
using namespace std;

void heapify(int arr[], int size, int i)
{
    int largest = i;
    int left = i*2 + 1;
    int right = i*2 + 2;
    //int parent = (i&1) ? i/2 : i/2+1;

    if(left<size && arr[left]>arr[largest])
        largest = left;
    if(right<size && arr[right]>arr[largest])
        largest = right;

    if(largest!=i)
    {
        swap(arr[i], arr[largest]);
        heapify(arr, size, largest);
    }
}

void maxheap(int arr[], int size)
{
    int i;
    for(i=size/2; i>=0; i--)
        heapify(arr, size, i);
}

void heapsort(int arr[], int size)
{
    maxheap(arr, size);
    int i;
    for(i=size-1; i>0; i--)
    {
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

int main()
{
    int arr[] = {12, 11, 13, 5, 6, 7, 16, 3, 10};
    int n = sizeof(arr)/sizeof(arr[0]);

    maxheap(arr, n);
    for(int i=0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;

    //heapsort(arr, n);
    //for(int i=0; i<n; i++)
        //cout << arr[i] << " ";
    return 0;
}


