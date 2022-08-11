#include <stdio.h>
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else
       return n1;
}
int main()
{
   int n1, n2, lcm;
   printf("Enter two positive integers: ");
   scanf("%d %d", &n1, &n2);
   lcm = (n1 * n2)/gcd(n1,n2);
   printf("L.C.M is %d.\n", lcm);
   return 0;
}

