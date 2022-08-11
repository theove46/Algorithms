#include <bits/stdc++.h>
using namespace std;

int minimum(int x, int y, int z)
{
    return min(x, min(y, z));
}

int editDist(string str1, string str2, int m, int n)
{
    if(m==0) return n;
    if(n==0) return m;

    if(str1[m-1] == str2[n-1]) return editDist(str1, str2, m - 1, n - 1);

    return 1 + minimum(editDist(str1, str2, m, n-1), editDist(str1, str2, m-1, n), editDist(str1, str2, m-1, n-1));
}

int main()
{
    string str1, str2;
    while(1)
    {
        cin >> str1 >> str2;
        cout << editDist(str1, str2, str1.length(), str2.length()) << endl;
    }
    return 0;
}
