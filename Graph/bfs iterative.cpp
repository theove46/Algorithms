#include <bits/stdc++.h>
#define pb push_back
using namespace std;

vector<bool> v;
vector<vector<int> > g;

void edge(int a, int b)
{
    g[a].pb(b);

    /// for undirected graph add this line
    /// g[b].pb(a);
}

void bfs(int u)
{
    queue<int> q;
    q.push(u);
    v[u] = true;
    //cout << "*****" << u << endl;

    while (!q.empty())
    {
        int f = q.front();
        q.pop();
        cout << f << " ";
        //cout << endl;

        vector<int> :: iterator i;
        /// Enqueue all adjacent of f and mark them visited
        for (i = g[f].begin(); i != g[f].end(); i++) {
            if (!v[*i])
            {
                //cout << "####" << *i << endl;
                q.push(*i);
                v[*i] = true;
            }
        }
    }
}
// Driver code
int main()
{
    int n, e; ///n = node, e = edge
    cin >> n >> e;
    v.assign(n, false); /// all element of n will false
    ///g.assign(n, vector<int>());
    g.assign(n, vector<int>(0));

    int a, b;
    for (int i = 0; i < e; i++) {
        cin >> a >> b;
        edge(a, b);
    }
    for (int i = 0; i < n; i++) {
        if (!v[i]) /// v[i]==false
            bfs(i);
    }
    return 0;
}


/*

8 10
0 1
0 2
0 3
0 4
1 5
2 5
3 6
4 6
5 7
6 7

*/
