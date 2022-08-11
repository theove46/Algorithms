#include<bits/stdc++.h>
using namespace std;

const int MX = 1000005; //maximum element in a piles
int grundy[MX];
int rev[3] = { 1 , 2 , 3}; //takeout

int Cal(int x)
{
    if( x == 0 ) return 0 ; // base case , grunday is always zero

    int i, ans;
    int &ret = grundy[x];
    if( ret != -1 ) return ret;

    set <int> s ;
    for (i=0;  i<3 ; i++)
    {
        if( x - rev[i] >= 0 )
        s.insert(Cal(x - (rev[i]) ) );
    }
    ans = 0 ;
    while(s.find(ans) != s.end()) ans++;
    return ret = ans ;
}

int main()
{
    int n, i, res=0 ;
    cin >> n; //piles number
    int piles[n];
    memset(grundy, -1, sizeof(grundy));
    for(i=0; i<n; i++)
    {
        cin >> piles[i];
        res ^= Cal(piles[i]);
    }
    if(res) puts("Player 1\n"); // first mover win
    else puts("Player 2\n");

    return (0);
}
