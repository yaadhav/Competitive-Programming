#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int lengthOfLIS(vector<int>& nums) {

        int n=nums.size();
        vector<int> prev(n+1), ds(n+1);

        for( int i=n-1; i>=0; i--) {
            for( int j=i; j>=0; j--) {
                ds[j]=prev[j];
                if( j==0 || nums[i]>nums[j-1] )
                    ds[j]=max( ds[j], prev[i+1]+1);
            }
        }

        return ds[0];
    }
};

int main()
{
    vector<int> nums={10,9,2,5,3,7,101,18};

    Solution sol;
    int ans=sol.lengthOfLIS(nums);

    cout << ans << endl;

    return 0;
}