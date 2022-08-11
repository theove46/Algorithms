#include<bits/stdc++.h>
using namespace std;

#define mx 100000
vector <int> edges[mx];
vector <int> cost[mx];

int main()
{
    int numNodes, numEdges, i, j, edin[mx]={0}, edout[mx]={0}, x, y, c, vs;
    scanf("%d%d", &numNodes, &numEdges);
    for(i=1; i<=numEdges; i++)
    {
        scanf("%d%d%d", &x, &y, &c);
        edges[x].push_back(y);
        cost[x].push_back(c);
        edout[x]++;
        edin[y]++;
    }
    for(i=1; i<=numNodes; i++)
    {
        if(!edges[i].empty())
        {
            printf("Node: %d\n", i);
            vs = edges[i].size();
            printf("Edges: (%d) -> ", vs);
            for(j=0; j<vs; j++)
                printf("%d ", edges[i][j]);
            printf("\nInner Edges: %d\nOuter Edges: %d\n\n", edin[i], edout[i]);
        }
    }
    return 0;
}
