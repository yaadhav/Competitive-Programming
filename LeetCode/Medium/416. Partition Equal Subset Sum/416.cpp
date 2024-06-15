#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canPartition(vector<int>& nums) {

        int n=nums.size();
        int sum=accumulate( nums.begin(), nums.end(), 0);

        if( sum%2==1 ) return 0;
        sum/=2;

        vector<int> ds(sum+1), prev(sum+1);

        prev[nums[0]]=1, prev[0]=ds[0]=1;
        
        for( int i=1; i<n; i++) {
            for( int j=1; j<sum+1; j++) {
                bool p=0;
                if( j>=nums[i] )
                    p=prev[j-nums[i]];
                bool np=prev[j];

                ds[j]=p||np;
            }
            prev=ds;
        }

        return ds[sum];
    }
};


int main()
{
    vector<int> nums = { 1, 2, 3, 8};

    Solution s;
    int ans = s.canPartition(nums);

    cout << ans;

    return 0;
}