#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int maxProfit( int k, vector<int>& prices) {
        int n=prices.size();
        k*=2;

        vector<int> prev(k+1), cur(k+1);

        for( int i=n-1; i>=0; i--) {
            for( int j=1; j<=k; j++) {

                if( j%2==0 )
                    cur[j]=prev[j-1]-prices[i];
                else    
                    cur[j]=prev[j-1]+prices[i];

                cur[j]=max( cur[j], prev[j]);
            }
            prev=cur;
        }

        return cur[k];
    }
};

int main()
{
    vector<int> prices={1,2,4,2,5,7,2,4,9,0};

    Solution sol;
    int ans=sol.maxProfit(2, prices);

    cout << ans << endl;

    return 0;
}