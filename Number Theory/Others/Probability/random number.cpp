#include <bits/stdc++.h>
using namespace std;

//This is a sample program to generate a random numbers based on probability desity function of spiner
//pdf(x) = 1 if x>360
//       = 0 if x<0
//       = x/360 otherwise
int N = 10;
int main()
{
    int p, r;
    for (int i = 0; i < 100; i++)
    {
        p = rand();
        cout << i << " : " << p << "\n";
        r = p % 400;
        if (r > 300)
            cout << 1 << "\n";
        else if (r < 100)
            cout << 0 << "\n";
        else
            cout << r * 0.1 / 300 << "\n";
    }
    cout << "...";
}
