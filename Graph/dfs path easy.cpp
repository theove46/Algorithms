#include<bits/stdc++.h>
using namespace std;

void add(int a, int b, list <int> *adj)
{
    adj[a].push_back(b);
}

void check(int v, bool visited[], list <int>  *adj)
{
    visited[v] = true;

    int i;
    cout << v << " ";

    /*cout << endl << "**** ";
    for(i = 1; i <=4; i++)
        cout << visited[i] << " ";
    cout << endl;*/

    list<int>::iterator it;
    for(it = adj[v].begin(); it != adj[v].end(); it++)
        if (!visited[*it])
            check(*it, visited, adj);
}

void dfs(int n, int fst, list <int>  *adj)
{
    int i, j;
    bool visited[n+1];
    for(i = 1; i <= n; i++)
        visited[i] = false;

    visited[fst] = true;
    check(fst, visited, adj);

    for(i = 1; i <=n; i++)
        if(visited[i] == false)
            check(i, visited, adj);
}

int main()
{
    int n, e, i, a, b, fst;

    cout << "Enter Total Nodes And Edges=" << endl;
    cin >> n >> e;
    cout <<"\nEDGES \n";

    list <int> adj[n+1];

    for(i=0; i<e; i++)
    {
        cin >> a >> b;
        add(a, b, adj);
    }
    cout << "Enter 1st node"<<endl;
    cin >> fst;

    cout <<"DFS ORDER OF VISITED VERTICES: ";

    dfs(n, fst, adj);
    return 0;
}

/*
Enter no of vertices:4
Enter no of edges:4

EDGES
1 2
1 3
2 4
3 4
Enter initial vertex to traverse from:1
DFS ORDER OF VISITED VERTICES:1 2 4 3
*/
