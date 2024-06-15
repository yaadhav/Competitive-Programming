#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int n=prices.size();

        int profit=0;
        for( int i=1; i<n; i++) {
            if( prices[i]>=prices[i-1] ) 
                profit+=prices[i]-prices[i-1];
        }

        return profit;
    }
};

int main()
{
    int n;
    cin >> n;

    vector<int> prices(n);

    for( int &i : prices)
        cin >> i ;

    Solution sol;
    int res = sol.maxProfit(prices);

    cout << res << endl;

    return 0;
}