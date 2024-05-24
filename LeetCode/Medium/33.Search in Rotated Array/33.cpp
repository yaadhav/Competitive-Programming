#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=0, h=nums.size()-1, ans=-1;

        while(l<=h)
        {
            int m=(l+h)/2;

            if( nums[m]==target )
            {
                ans=m;
                break;
            }
            else if( nums[m]<nums[h] )
            {
                if( target>nums[m] && target<=nums[h] )
                    l=m+1;
                else
                    h=m-1;
            }
            else
            {
                if( target>=nums[l] && target<nums[m] )
                    h=m-1;
                else
                    l=m+1;
            }
        } 

        return ans;        
    }
};

int main()
{
    vector<int> nums={18, 19 ,2, 7, 11, 15};
    int target = 19;

    Solution s;
    int ans = s.search(nums, target);

    cout << ans << endl;    

    return 0;
}