#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    int maxSumAfterPartitioning(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int> dp(n+1);

        for( int i=n-1; i>=0; i--) {
            int cmax=arr[i];
            for( int j=i; j<n && j<i+k; j++) {
                cmax=max( cmax, arr[j]);
                int cur=dp[j+1]+(cmax*(j-i+1));
                dp[i]=max( cur, dp[i]);
            }
        }

        return dp[0];
    }
};

int main()
{
    vector<int> arr={1,4,1,5,7,3,6,1,9,9,3};
    int k=4;
                            
    Solution sol;
    int ans=sol.maxSumAfterPartitioning( arr, k);
    cout << ans << endl; 

    return 0;
}