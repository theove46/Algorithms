#include<bits/stdc++.h>

using namespace std;

int count( int coin[], int num, int total )
{
    int table[total+1], i, j;
    memset(table, 0, sizeof(table));

    // Base case (If given value is 0)
    table[0] = 1;

    for(i=0; i<num; i++)
        for(j=coin[i]; j<=total; j++)
            table[j] += table[j-coin[i]];

    return table[total];
}

int main()
{
    //int coin[] = {1, 2, 3};
    //int num = sizeof(coin)/sizeof(coin[0]);
    //int total = 4;
    int t, num, total, i;
    cout << "case : ";
    cin >> t;
    while(t--)
    {
        cout << "coin number : ";
        cin >> num;
        int coin[num];
        cout << "Coins : ";
        for(i = 0; i<num; i++)
            cin >> coin[i];
        cout << "Total Ammoint : ";
        cin >> total;
        cout << "Ways : " << count(coin, num, total) << endl;;
    }
    return 0;
}
