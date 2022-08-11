#include<iostream>
using namespace std;

int bellNumber(int n)
{
   int bell[n+1][n+1], i, j;
   bell[0][0] = 1;
   for(i=1; i<=n; i++)
   {
      // Explicitly fill for j = 0
      bell[i][0] = bell[i-1][i-1];

      // Fill for remaining values of j
      for(j=1; j<=i; j++)
         bell[i][j] = bell[i-1][j-1] + bell[i][j-1];
   }
   return bell[n][0];
}

int main()
{
    int n, t;
    cin >> t;
    while(t--)
    {
        cin >> n;
        cout << "Bell Number " << n << " is " << bellNumber(n) << endl;
    }
    return 0;
}
