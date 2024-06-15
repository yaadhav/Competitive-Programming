#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();

        if( n==1 ) 
            return amount%coins[0]==0 ? amount/coins[0]:-1;
        
        vector<int> prev(amount+1, INT_MAX-1), ds(amount+1, INT_MAX-1);

        prev[0]=ds[0]=0;

        for( int i=0; i<n; i++) {
            for( int j=1; j<=amount; j++) {
                int pa=INT_MAX-1, pn=INT_MAX-1;
                if( j>=coins[i] )
                    pa=ds[j-coins[i]]+1;
                if( i>0 )
                    pn=prev[j];

                ds[j]=min( pa, pn);
            }
            prev=ds;
        }
      
        return prev[amount]==INT_MAX-1 ? -1:prev[amount];
    }
};

int main()
{
    vector<int> coins={ 1, 2, 5};
    int amount=11;

    Solution s;
    int ans = s.coinChange(coins, amount);
    cout << ans;

    return 0;
}