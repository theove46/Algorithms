#include<bits/stdc++.h>
using namespace std;

void add(int a, int b, list <int> *adj)
{
    adj[a].push_back(b);
}

void check(int v, bool visited[], stack<int> &Stack, list <int> *adj)
{
    visited[v] = true;

    list<int>::iterator it;
    for(it = adj[v].begin(); it != adj[v].end(); it++)
        if(visited[*it]==false)
            check(*it, visited, Stack, adj);

    Stack.push(v);
}

void topologicalSort(int v, list <int>  *adj)
{
    stack<int> Stack;
    bool visited[v];
    int i, j, x;

    for(i = 0; i < v; i++)
        visited[i] = false;

    for(i = 0; i < v; i++)
    {
        if (visited[i] == false)
            check(i, visited, Stack, adj);
    }

    while(Stack.empty() == false)
    {
        cout << Stack.top() << " ";
        Stack.pop();
    }
}

int main()
{
    int n, i, j, v, x, a, b;
    cin >> v;

    list <int> adj[v];
    for(i=0; i<v; i++)
    {
        cin >> a >> b;
        add(a, b, adj);
    }

    for(i=0; i<v; i++)
    {
        x = adj[i].size();
        cout << "Adj " << i << "   size: " <<  x << "    ";

        list<int>::iterator it;
        for(it = adj[i].begin(); it != adj[i].end(); it++)
            cout << *it << " ";
        cout << endl;
    }

    topologicalSort(v, adj);

    return 0;
}

/*
6
5 2
5 0
4 0
4 1
2 3
3 1
*/

