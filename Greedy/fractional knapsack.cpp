#include <bits/stdc++.h>
using namespace std;

void maxProfit(vector<int> profit, vector<int> weight, int cap)
{
    int Elements = profit.size();
    int i;

    // Multimap container to store ratio and index
    multimap<double, int> ratio;

    double max_profit = 0;
    for(i=0; i<Elements; i++)
    {

        // Insert ratio profit[i] / weight[i] and corresponding index
        ratio.insert( make_pair( (double)profit[i]/weight[i], i ));
    }

    // Declare a reverse iterator for Multimap
    multimap<double, int>::reverse_iterator it;

    // Traverse the map in reverse order
    for(it=ratio.rbegin(); it!=ratio.rend(); it++)
    {

        // Fraction of weight of i'th item that can be kept in knapsack
        double fraction = (double)cap / weight[it->second];

        if(cap>=0 && cap>=weight[it->second])
        {
            max_profit += profit[it->second];
            cap -= weight[it->second];
        }
        else if(cap<weight[it->second])
        {
            max_profit += fraction * profit[it->second];
            break;
        }
        cout << max_profit << endl;
    }
    cout << "Maximum profit earned is: " << max_profit;
}

int main()
{
    int size, i, cap;
    cin >> size;
    vector<int> profit(size), weight(size);
    for(i=0; i<size; i++)
        cin >> profit[i] >> weight[i];
    cin >> cap;
    maxProfit(profit, weight, cap);
}

/*
4
100 20
280 40
200 55
400 10
60
*/
