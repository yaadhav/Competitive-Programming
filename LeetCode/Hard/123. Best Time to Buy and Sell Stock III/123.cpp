#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxProfit(vector<int>& prices) {

        int n=prices.size();
        vector<int> prev(5), cur(5);

        for( int i=n-1; i>=0; i-- ) {
            for( int j=3; j>=0; j--) {
                if( j%2==0 )
                    cur[j]=prev[j+1]-prices[i];
                else
                    cur[j]=prev[j+1]+prices[i];

                cur[j]=max( cur[j], prev[j]);
            }
            prev=cur;
        }

        return cur[0];
    }
};

int main()
{
    vector<int> prices={1,2,4,2,5,7,2,4,9,0};

    Solution sol;
    int ans=sol.maxProfit(prices);

    cout << ans << endl;

    return 0;
}