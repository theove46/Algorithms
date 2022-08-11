#include<stdio.h>
/*
int fibo(int n)
{
    if(n==1) return 0;
    if(n==2) return 1;

    int a=0, b=1, sum, i;

    for(i=3; i<=n; i++)
    {
        sum = a+b;
        a = b;
        b = sum;
    }
    return sum;
}

int main()
{
    int i, n;
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("%d ", fibo(i));
    }
    return 0;
}
*/
/*
int fibo(int n)
{
    int a=0, b=1, sum, i;

    for(i=0; i<n; i++)
    {
        if(i<=1)
        {
            sum = i;
        }
        else
        {
            sum = a+b;
            a = b;
            b = sum;
        }
        printf("%d ", sum);
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    fibo(n);
    return 0;
}
*/


int main()
{
  int n, a = 0, b = 1, sum, i;

  scanf("%d", &n);

  for (i = 0; i < n; i++)
  {
    if (i <= 1)
      sum = i;
    else
    {
      sum = a + b;
      a = b;
      b = sum;
    }
    printf("%d ", sum);
  }
  return 0;
}
