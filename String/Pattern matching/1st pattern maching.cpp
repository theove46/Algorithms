#include <stdio.h>
#include <string.h>
int match(char [], char []);

int main() {
  char a[100], b[100];
  int position;

  gets(a);

  gets(b);

  position = match(a, b);

  if (position != -1) {
    printf("Found at location: %d\n", position + 1);
  }
  else {
    printf("Not found.\n");
  }
  return 0;
}

int match(char text[], char pattern[])
{
  int i, j, e, tl, pl, position = -1;

  tl  = strlen(text);
  pl  = strlen(pattern);

  if (pl > tl)
    return -1;

  for (i=0; i<=tl-pl; i++)
  {
    position = e = i;

    for (j=0; j<pl; j++)
    {
      if (pattern[j] == text[e])
        e++;

      else
        break;
    }
    if (j == pl)
      return position;
  }
  return -1;
}
