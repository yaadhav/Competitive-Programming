#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min=prices[0], max=prices[0], ans=0;

        for( int i=1; i<prices.size(); i++)
        {
            if( prices[i-1]>prices[i] )
            {
                ans+=max-min;
                min=prices[i];
                max=prices[i];
            }
            if( prices[i]>max )
                max=prices[i];
        }
        ans+=max-min;

        return ans;        
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