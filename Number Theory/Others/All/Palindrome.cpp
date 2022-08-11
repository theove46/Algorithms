#include <stdio.h>
#include <string.h>
int main()
{
  char a[100], b[100];

  int l, i, j;
  gets(a);

  l = strlen(a);

  for(i=0, j=l-1; i<l; i++, j--)
    b[i] = a[j];

    b[l] = '\0';

  printf("%s\n%s\n", a, b);

  if (strcmp(a, b) == 0)
    printf("The string is a palindrome.\n");
  else
    printf("The string isn't a palindrome.\n");

  return 0;
}
