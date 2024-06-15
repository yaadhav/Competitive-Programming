#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        
        int n=nums.size();
        int sum=accumulate( nums.begin(), nums.end(), 0);

        map<int,int> prev, ds;

        prev[-nums[0]]=1;
        prev[nums[0]]+=1;

        for( int i=1; i<n; i++) {
            for( int j=-sum; j<=sum; j++) {
                ds[j]=prev[j-nums[i]];
                ds[j]+=prev[j+nums[i]];
            }
            prev=ds;
        }

        return prev[target];
    }
};


int main()
{
    vector<int> nums = { 1, 2, 3, 8};
    int target=3;

    Solution s;
    int ans = s.findTargetSumWays(nums, target);

    cout << ans;

    return 0;
}