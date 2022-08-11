#include <iostream>
using namespace std;
int power(int x, unsigned int y, int p)
{
    int res = 1;
    x = x % p;
    if (x == 0)
        return 0;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;

        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
        //cout << y << endl;
    }
    return res;
}

int main()
{
    int x, y, p;
    cin >> x >> y >> p;
    cout << "Power is : " << power(x, y, p);
    return 0;
}
