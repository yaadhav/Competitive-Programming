#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {

        int n=nums.size();
        sort( nums.begin(), nums.end());

        vector<int> dp(n, 1);
        int maxx=0;
        for( int i=0; i<n; i++) {
            for( int j=0; j<i; j++) {
                if( nums[i]%nums[j]==0 ) 
                    dp[i]=max( dp[i], dp[j]+1);
            }
            maxx=max( maxx, dp[i]);
        }

        vector<int> ans(maxx+1);
        for( int i=n; i>=0; i--) {
            if( dp[i]==maxx && ans[maxx]%nums[i]==0 ) {
                ans[maxx-1]=nums[i];
                maxx--;
            }
        }

        ans.pop_back();
        reverse( ans.begin(), ans.end());
        return ans;
    }
};

int main()
{
    vector<int> nums={ 1, 2, 3, 6, 8, 24};

    /*
        1 2 3 6 8 24
        1 2 2 3 3 4
    */

    Solution sol;
    vector<int> ans=sol.largestDivisibleSubset(nums);

    for( int i: ans)
        cout << i << " ";
    cout << endl;

    return 0;
}