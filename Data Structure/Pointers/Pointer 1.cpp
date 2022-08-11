#include<stdio.h>
int main()
{
    int x = 10;
    printf("%p\n\n", &x);

    printf("Address \tname \tvalue\n");
    printf("%p \t%s \t%d\n", &x, "x", x);

    int *y = &x;
    printf("%p \t%s \t%d\n", y, "x", x);

    int* z = &x;
    printf("%p \t%s \t%d\n", z, "x", x);

    int *y1 = &x;
    printf("%d\n\n", *y1);
    return 0;
}
