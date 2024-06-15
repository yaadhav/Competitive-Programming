#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int change(int amount, vector<int>& coins) {
        int n=coins.size();
        vector<int> prev(amount+1);

        prev[0]=1;

        for( int i=0; i<n; i++) {
            vector<int> ds(amount+1);
            ds[0]=1;
            for( int j=1; j<=amount; j++) {
                if( j>=coins[i] )
                    ds[j]+=ds[j-coins[i]];
                if( i>0 )
                    ds[j]+=prev[j];
            }
            prev=ds;
        }

        return prev[amount];
    }
};

int main()
{
    vector<int> coins={ 1, 2, 5};
    int amount=5;

    Solution s;
    int ans = s.change( amount, coins);
    cout << ans;

    return 0;
}