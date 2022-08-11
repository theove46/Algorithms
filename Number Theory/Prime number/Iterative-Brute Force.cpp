#include <stdio.h>

int main()
{
  int n, i, c=0;
  printf("Enter any number n: ");
  scanf("%d", &n);

  if(n==1)
    printf("%d is not a Prime Number\n", n);

  else if(n==2 || n==3)
    printf("%d is a Prime Number\n", n);

  else
  {
      if(n!=2 && n%2==0)
        printf("%d is not a Prime Number\n", n);

        else
        {
            for (i=3; i<n; i+=2)
            {
                if (n%i == 0)
                    c++;

                if(c==1)
                    break;
            }
            if (c == 1)
                printf("%d is not a Prime Number\n", n);

            else
                printf("%d is a Prime Number\n", n);
        }

  }
  return 0;
}
