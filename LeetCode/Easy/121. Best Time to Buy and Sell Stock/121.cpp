#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n=prices.size();

        int minn=prices[0], maxx=0;
        for( int i=1; i<n; i++) {
            minn=min( minn, prices[i]);
            maxx=max( maxx, prices[i]-minn);
        }

        return maxx;
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