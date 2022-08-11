#include<stdio.h>

int fib(int n)
{
  /* Declare an array to store Fibonacci numbers. */
  int f[n+2];   // 1 extra to handle case, n = 0
  int i;
  f[1] = 0;
  f[2] = 1;
  for (i = 3; i <= n; i++)
      f[i] = f[i-1] + f[i-2];

  return f[n];
}

int main ()
{
  int n;
  scanf("%d", &n);
  printf("%d\n", fib(n));
  getchar();
  return 0;
}
