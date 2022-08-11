#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m, n, i, j, k, top=0, v;

    cout <<"Enter no of vertices:";
    cin >> n;
    cout <<"Enter no of edges:";
    cin >> m;
    cout <<"\nEDGES \n";

    int cost[n+1][n+1], stk[n+1],visit[n+1],visited[n+1];
    for(k=1; k<=m; k++)
    {
        cin >>i>>j;
        cost[i][j]=1;
    }

    cout <<"Enter initial vertex to traverse from:";
    cin >>v;

    cout <<"DFS ORDER OF VISITED VERTICES:";
    cout << v <<" ";

    visited[v]=1;
    k=1;
    while(k<n)
    {
        for(j=n; j>=1; j--)
            if(cost[v][j]!=0 && visited[j]!=1 && visit[j]!=1)
            {
                visit[j]=1;
                stk[top]=j;
                top++;
            }
        v=stk[top--];
        cout<<v << " ";
        k++;
        visit[v]=0;
        visited[v]=1;
    }
    return 0;
}
