#include <bits/stdc++.h>
using namespace std;

#define infinity 1<<30   //2^30
typedef pair<int, int> iPair;

void dijstkra(int n, list< pair<int, int> > *adj, int source)
{
    //priority_queue<int, vector<int>, greater<int> > pq;        // pqueue in reverse order;
    priority_queue<iPair, vector<iPair>, greater<iPair> > pq;

    vector<int> distance(n, infinity);  // n size vector. all elements are infinity

    pq.push(make_pair(0, source));
    distance[source] = 0;

    while(!pq.empty())
    {
        int u, v, w;

        u = pq.top().second;  // u = top source;
        pq.pop();

        //list< pair<int, int> >::iterator it;
        //for(it = adj[u].begin(); it != adj[u].end(); it++)
        for(auto it : adj[u])
        {
            v = it.first;
            w = it.second;
            if(distance[v] > distance[u]+w)
            {
                distance[v] = distance[u] + w;
                pq.push(make_pair(distance[v], v));
            }
        }
    }
    cout << "Vertex Distance from Source : " << source << "\n";
    for(int i=0; i<n; i++)
        cout << i << "\t\t" << distance[i] << "\n";
}

int main()
{
    //this code can handle maximum 10000 nodes
    list< pair<int, int> > adj[10000];
    int numNodes, numEdges, u, v, w, source, i;
    cout << "How many Nodes: ";
    cin >> numNodes;
    cout << "How many Nodes: ";
    cin >> numEdges;

    for(i=0; i<numEdges; i++)
    {
        cin >> u >> v >> w;
        adj[u].push_back(make_pair(v, w));
        adj[v].push_back(make_pair(u, w));
    }
    cout << "Source : ";
    cin>>source;

    dijstkra(numNodes, adj, source);
    return 0;
}

/*
9
14
0 1 4
0 7 8
1 2 8
1 7 11
2 3 7
2 8 2
2 5 4
3 4 9
3 5 14
4 5 10
5 6 2
6 7 1
6 8 6
7 8 7
0
*/
