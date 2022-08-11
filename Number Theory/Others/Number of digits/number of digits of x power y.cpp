#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x, y;
    double d;
    while(1)
    {
        cin >> x >> y;
        if(x==0) break;
        d = floor(y * log10(x)) + 1;
        cout << d << endl;
    }
    return 0;
}


