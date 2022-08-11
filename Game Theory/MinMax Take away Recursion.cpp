#include <bits/stdc++.h>
using namespace std;

int game(long n)
{
    if(n==0 || n==1)
        return 0;
    if(game(n-2)==0 || game(n-3)==0 || game(n-5)==0)
        return 1;
    return 0;
}

int main()
{
    long n, win;
    while(scanf("%ld", &n)==1)
    {
        if(n==-1) break;
        win = game(n);
        if(win==1) printf("Player 1\n");
        else printf("Player 2\n");
    }
    return 0;
}

