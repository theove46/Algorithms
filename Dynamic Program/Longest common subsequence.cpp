#include<bits/stdc++.h>
using namespace std;

#define MAX 100
string X, Y;
int i, j, m, n, c[MAX][MAX], b[MAX][MAX];

void printLCS(int i,int j)
{
    if(i==0 || j==0) return;
    if(b[i][j]==1)
    {
        printLCS(i-1, j-1);
        printf("%c", X[i-1]);
    }
    else if (b[i][j]==2)
        printLCS(i-1, j);
    else
        printLCS(i, j-1);
}

int LCSlength()
{
    m = X.length();
    n = Y.length();

    for(i=1; i<=m; i++) c[i][0]=0;
    for(j=0; j<=n; j++) c[0][j]=0;

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(X[i-1] == Y[j-1])
            {
                c[i][j]=c[i-1][j-1]+1;
                b[i][j]=1;
            }
            else if(c[i-1][j] >= c[i][j-1])
            {
                c[i][j]=c[i-1][j];
                b[i][j]=2;
            }
            else
            {
                c[i][j]=c[i][j-1];
                b[i][j]=3;
            }
        }
    }
    return c[m][n];
}


int main()
{
    while (1)
    {
        getline(cin, X);
        getline(cin, Y);
        //cout << X << " " << Y << endl;
        printf("LCS length is: %d\n", LCSlength());
        printLCS(m,n);
        printf("\n");
    }
    return 0;
}
