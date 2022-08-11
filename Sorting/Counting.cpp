#include<stdio.h>

int main()
{
    int n, i, j, k, num, arr[101];
    for(i=0; i<101; i++)
        arr[i]=0;

    printf("How many numbers: ");
    scanf("%d", &n);

    printf("Enter Numbers: ");
    for(i=0; i<n; i++)
    {
        scanf("%d", &num);
        arr[num]++;
    }
    k=0;
    for(i=0; i<101; i++)
    {
        if(arr[i]>0)
        {
            for(j=1; j<=arr[i]; j++, k++)
                printf("%d ", i);
        }
        if(k==n)
            break;
    }
    return 0;
}
