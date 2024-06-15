#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int recurse( int ind, vector<int> nums) {

        if( ind==nums.size()-1 )
            return 0;

        int steps=INT_MAX;
        for( int j=ind+1; j<=ind+nums[ind] && j<nums.size(); j++) 
            steps=min( steps, recurse( j, nums)+1);

        return steps;     
    }

    int jump(vector<int>& nums) {

        int n=nums.size();
        vector<int> dp(n, INT_MAX);

        dp.back()=0;

        for( int i=n-2; i>=0; i--) {
            for( int j=i+1; j<=i+nums[i] && j<n; j++) 
                dp[i]=min( dp[i], dp[j]+1);
        }

        return dp[0];
    }
};

int main()
{
    vector<int> nums={2, 3, 1, 1, 4};
                                                                      
    Solution s;
    int ans = s.jump(nums);
    cout << ans ;

    return 0;
}