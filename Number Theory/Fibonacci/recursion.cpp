#include<stdio.h>
/*
int fibo(int n)
{
  if (n == 1) return 0;
  if (n == 2) return 1;

    return (fibo(n-1) + fibo(n-2));
}

int main()
{
  int n, i;

  scanf("%d", &n);

  for (i = 1; i <= n; i++)
  {
    printf("%d ", fibo(i));
  }

  return 0;
}
*/


int a[50];
int fibo(int n) //global variable
{
  if (n==1) return 0;
  if (n==2) return 1;

  if(a[n]>0)
    return a[n];

  a[n] = a[n-1] + a[n-2];
    return a[n];
}

int main()
{
  int n, i;
  a[2] = 1;
  scanf("%d", &n);
  for (i = 1; i <= n; i++)
  {
    printf("%d ", fibo(i));
  }

  return 0;
}
