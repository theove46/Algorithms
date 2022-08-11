#include<stdio.h>
int main()
{
    int i, a[5] = {3, 7, 9, 21, 5};
    for(i=0; i<5; i++)
        printf("a[%d] \t%p \t %d\n", i, &a[i], a[i]);
    return 0;
}
