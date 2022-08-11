#include <bits/stdc++.h>
using namespace std;

const int maxn = 100005;
int dp[maxn];
bool vis[maxn];
int mov[] = {2, 3, 5};

bool valid(int x)
{
    return x>=0;
}

/*int game(long n)
{
    if(n==0 || n==1)
        return 0;
    if(game(n-2)==0 || game(n-3)==0 || game(n-5)==0)
        return 1;
    return 0;
}*/

bool game(long x)
{
    if(x==0 || x==1)
        return 0;

    if(vis[x]==true)
        return dp[x];

    int i;
    for(i=0; i<3; i++)
    {
        if( (valid(x-mov[i])==true) && game(x-mov[i])==false)
            return dp[x] = true;
    }
    return dp[x] = false;
}

int main()
{
    long n, win;
    while(scanf("%ld", &n)==1)
    {
        memset(vis, 0, maxn);
        if(n==-1) break;
        win = game(n);
        if(win) printf("Player 1\n");
        else printf("Player 2\n");
    }
    return 0;
}
