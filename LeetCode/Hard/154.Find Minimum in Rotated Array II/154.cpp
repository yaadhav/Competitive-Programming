#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int low=0, high=nums.size()-1, ans=nums[0];

        while( low<=high ) {
            
            int mid=(low+high)>>1;

            ans=min( ans, nums[mid]);

            if( nums[mid]>nums[high] )
                low=mid+1;
            else if( nums[mid]==nums[high] && mid!=high )
                high--;
            else
                high=mid-1;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={18, 19 ,2, 7, 11, 15};

    Solution s;
    int ans = s.findMin(nums);

    cout << ans << endl;    

    return 0;
}