#include <stdio.h>

int main()
{
  int n, array[1000], i, j, temp;

  printf("Enter number of elements: ");
  scanf("%d", &n);

  printf("Enter numbers: ");

  for (i=0; i<n; i++)
    scanf("%d", &array[i]);

		for (i=0; i<n; i++)
		{
		  j = i;
			while (j>0 && array[j]<array[j-1])
			{
				temp = array[j];
				array[j] = array[j-1];
				array[j-1] = temp;
				j--;
			}
		}

  printf("Sorted list in ascending order: ");

  for (i=0; i<=n-1; i++)
    printf("%d ", array[i]);

  return 0;
}
