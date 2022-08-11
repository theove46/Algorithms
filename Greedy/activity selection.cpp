#include<bits/stdc++.h>
using namespace std;

void activity(vector<int>start, vector<int>finish, int n)
{
    multimap<int, int> finish_first;
    int i, j, x, total;
    for(i=0; i<n; i++)
        finish_first.insert(make_pair(finish[i], i));

    multimap<int, int>:: iterator it;
    cout << "Task Schedule : ";
    x = 0, total = 0;;
    for(it=finish_first.begin(); it!=finish_first.end(); it++)
    {
        j = it->second;
        if(start[j]>=x)
        {
            total++;
            cout << j+1 << " ";
            x = finish[j];
        }
    }
    cout << endl << "Total : " << total << endl;
}

int main()
{
    int act, i, j;
    cin >> act;
    vector<int> start(act), finish(act);
    for(i=0; i<act; i++)
        cin >> start[i] >> finish[i];
    activity(start, finish, act);
    return 0;
}
