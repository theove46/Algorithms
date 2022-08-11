#include<bits/stdc++.h>
using namespace std;

void task(vector<int>start, vector<int>end, int n)
{
    int i, j, x, t;
    map<int, int> tsk;

    for(i=0; i<n; i++)
        tsk[start[i]]++;

    for(i=0; i<n; i++)
        tsk[end[i]]--;

    map<int, int>:: iterator it;
    x = 0, t=0;
    for(it=tsk.begin(); it!=tsk.end(); it++)
    {
        t += it->second;
        if(t>x) x = t;
    }
    cout << x << endl;
}

int main()
{
    int n, i;
    cin >> n;
    vector<int> start(n), end(n);
    for(i=0; i<n; i++)
        cin >> start[i] >> end[i];
    task(start, end, n);
    return 0;
}

