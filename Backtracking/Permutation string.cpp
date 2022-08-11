#include <bits/stdc++.h>
using namespace std;

void permute(string a, int l, int r)
{
    int i;
	if(l==r)
		cout << a << endl;
	else
	{
		for(i=l; i<=r; i++)
		{
			swap(a[l], a[i]);
			permute(a, l+1, r);
			swap(a[l], a[i]);
		}
	}
}

int main()
{
	string str;
	int n;
	while(1)
    {
        cin >> str;
        n = str.size();
        permute(str, 0, n-1);
        cout << endl;
    }
	return 0;
}

