#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool recurse( int ind, vector<int> nums) {

        if( ind==nums.size()-1 ) 
            return true;

        bool pos=0;
        for( int j=ind+1; j<nums.size() && j<=ind+nums[ind]; j++)
            pos=pos||recurse( j, nums);
        
        return pos;
    }

    bool canJump(vector<int>& nums) {
        int n=nums.size();
        vector<int> dp(n);

        dp.back()=1;

        for( int i=n-1; i>=0; i--) {
            for( int j=i+1; j<n && j<=i+nums[i]; j++)
                dp[i]=dp[i]||dp[j];
        }

        return dp[0];
    }
};

int main()
{
    vector<int> nums={2, 2, 1, 0, 4};
                                                                      
    Solution s;
    bool ans = s.canJump(nums);
    cout << ans ;

    return 0;
}