#include<bits/stdc++.h>
using namespace std;

int ans=0;  /// global variable

int gcd(int a, int b)
{
    if(b==0) return a;
    else return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a/gcd(a, b)*b;
}

int recursion(int ara[], int i, int jlcm, int num, int tnum, int lim)
{
    if(i==tnum) return 0;
    int x, ylcm;
    for(x=i; x<tnum; x++)
    {
        ylcm = lcm(ara[x], jlcm);

        if((num+1)%2==1) ans += (lim/ylcm); /// odd element number hoile +
        else ans -= (lim/ylcm);  /// even number element hoile -

        recursion(ara, x+1, ylcm, num+1, tnum, lim);
    }
}

int main()
{
    int tnum, lim, i;
    //cin >> lim;
    lim = 1000;
    //cin >> tnum;
    tnum = 10;
    //int ara[10];
    //for(i=0; i<tnum; i++) cin >> ara[i];
    int ara[] = {2, 3, 5, 6, 7, 11, 13, 15, 17, 23};
    ans = 0;
    recursion(ara, 0, 1, 0, tnum, lim);
    cout << ans << endl;
    return 0;
}
