#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxProfit( vector<int>& prices) {
        int n=prices.size();
        vector<int> prev(3), prev2(3), cur(3);

        for( int i=n-1; i>=0; i--) {
            
            cur[0]=max( prev[1]-prices[i], prev[0]);
            cur[1]=max( prev2[0]+prices[i], prev[1]);   

            prev2=prev;
            prev=cur;         
        } 

        return cur[0];
    }
};

int main()
{
    vector<int> prices={1,2,4,2,5,7,2,4,9};

    Solution sol;
    int ans=sol.maxProfit(prices);

    cout << ans << endl;

    return 0;
}