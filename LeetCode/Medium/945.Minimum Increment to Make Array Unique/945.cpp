#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {

        sort( nums.begin(), nums.end());

        int ans=0;
        for( int i=1; i<nums.size(); i++) {
            if( nums[i-1]>=nums[i] ) {
                ans+=nums[i-1]+1-nums[i];
                nums[i]=nums[i-1]+1;
            }
        }

        return ans;
    }
};


int main()
{
    vector<int> nums = {3,2,1,2,1,7,7,8,9};

    Solution s;
    int ans = s.minIncrementForUnique(nums);

    cout << ans;

    return 0;
}