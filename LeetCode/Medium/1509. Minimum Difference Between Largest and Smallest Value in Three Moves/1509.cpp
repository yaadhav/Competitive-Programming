#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minDifference(vector<int>& nums) {

        int n=nums.size();

        if( n<4 ) 
            return 0;

        sort( nums.begin(), nums.end());

        int minn=nums.back()-nums[0];
        for( int i=0, j=n-4; j<n; i++, j++)
            minn=min( nums[j]-nums[i], minn);
        
        return minn;
    }
};

int main()
{
    vector<int> nums={1,4,1,5,7,3,6,1,9,9,3};
           
    Solution sol;
    int ans=sol.minDifference(nums);
    cout << ans << endl; 

    return 0;
}