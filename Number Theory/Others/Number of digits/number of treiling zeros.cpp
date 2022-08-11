#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, zeros;
    while(1)
    {
        cin >> num;
        zeros = 0;
        if(num==0) break;
        while(num)
        {
            zeros += num/5;
            num/=5;
        }
        cout << zeros << endl;
    }
    return 0;
}
