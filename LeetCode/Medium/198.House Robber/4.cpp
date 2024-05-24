#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        int n=nums.size();
        if( n==1) return nums[0];
        
        vector<int> dp(n);

        dp[0]=nums[0], dp[1]=max( nums[0], nums[1]);

        for( int i=1; i<n; i++) {
             
            int p=nums[i]+dp[i-2];
            int np=dp[i-1];
            dp[i]=max( p, np);
        }

        return dp[n-1];
    }
};

int main()
{
    int n=4;
    vector<int> nums={ 5, 1, 1, 6, 2, 3, 5};

    Solution s;
    int ans = s.rob(nums);

    cout << ans;

    return 0;
}