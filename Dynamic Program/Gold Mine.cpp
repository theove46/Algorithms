#include<bits/stdc++.h>
using namespace std;
int main()
{
    int col, row, c, r;
    cin >> col >> row;
    int gold[col][row];

    for(c=0; c<col; c++)
        for(r=0; r<row; r++)
            cin >> gold[c][r];

    int ans=0, r8=0, ru=0, rd=0;

    for(r=0; r<row; r++)
    {
        for(c=0; c<col; c++)
        {
            if(r>0)
            {
                r8 = gold[c][r-1];
                ru = gold[c+1][r-1];
                rd = gold[c-1][r-1];
                //cout << r8 << " " << ru << " " << rd << endl;
            }

            if(c==0) gold[c][r] += max(r8, ru);
            else if(c==col-1) gold[c][r] += max(r8, rd);
            else gold[c][r] += max(r8, max(ru, rd));

            if(r==row-1)
            {
                if(c==0) ans = gold[c][r];
                else ans = max(ans, gold[c][r]);
                //cout << ans << endl;
            }
        }
    }
    cout << ans << endl;

    /*for(c=0; c<col; c++)
    {
        for(r=0; r<row; r++)
        {
            cout << gold[c][r] << " ";
        }
        cout << endl;
    }
    int gold[MAX][MAX]= { {1, 3, 1, 5}, {2, 2, 4, 1}, {5, 0, 2, 3}, {0, 6, 1, 2} };
    4 4
    1 3 1 5
    2 2 4 1
    5 0 2 3
    0 6 1 2
    */
    return 0;
}
