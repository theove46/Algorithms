#include <bits/stdc++.h>
using namespace std;

vector<int>edges[100];
queue<int>q;
vector<int>item;
int level[100], parent[100], visited[100], tn;

void bfs(int s)
{
    int j, k, fr;
    q.push(s);
    level[s]=0;
    for(j=0; j<tn; j++)
    {
        visited[j]=0;
    }
    visited[s]=1;

    while(!q.empty())
    {
        fr = q.front();
        for(k=0; k<edges[fr].size(); k++)
        {
            if(visited[edges[fr][k]]==0)
            {
                 q.push(edges[fr][k]);
                 level[edges[fr][k]] = level[fr]+1;
                 parent[edges[fr][k]] = fr;
                 visited[edges[fr][k]] = 1;
            }
        }
        item.push_back(q.front());
        q.pop();
    }
}


int main()
{
    int i, e, p, n, u, v, f, m;
    cout << "Enter Total Nodes And Edges=" << endl;
    cin >> tn >> e;
    for(i=1; i<=e; i++)
    {
        cin >> u >> v;
        edges[u].push_back(v);
    }

    cout<<"Enter 1st node"<<endl;
    cin>>f;
    bfs(f);

    cout<<"Enter Node to know shortest path"<<endl;
    cin>>n;

    cout<<"Shortest Path is="<<level[n]<<endl;

    cout<<"Enter Node To Know its Parent"<<endl;
    cin>>p;

    while(p!=f)
        p = parent[p];
    cout << "Parent is=" << p << endl;

    cout << "Sequence=" << endl;
    for(m=0; m<item.size(); m++)
        cout<<item[m] << " ";
    cout << endl;

    return 0;
}
