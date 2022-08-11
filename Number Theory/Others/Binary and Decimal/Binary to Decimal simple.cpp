#include <stdio.h>

int bToD(long long int num)
{
    //int num = n;
    int decimal = 0;
    int base = 1;
    int temp = num;
    while (temp)
    {
        int l = temp % 10;
        temp = temp / 10;

        decimal += l * base;

        base = base * 2;
    }

    return decimal;
}

int main()
{
    long long int num;

    scanf("%lld", &num);
    printf("%d\n", bToD(num));
    return 0;
}

