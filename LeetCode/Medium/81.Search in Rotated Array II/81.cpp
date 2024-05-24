#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void possible( int l, int h, vector<int>& nums, int target, bool& ans) {

        if(ans)
            return;

        while(l<=h)
        {
            int m=(l+h)/2;

            if( nums[m]==target )
            {
                ans=1;
                break;
            }
            else if( nums[m]<nums[h] || nums[l])
            {
                if( target>nums[m] && target<=nums[h] )
                    l=m+1;
                else
                    h=m-1;
            }
            else if( nums[m]>nums[h] )
            {
                if( target>=nums[l] && target<nums[m] )
                    h=m-1;
                else
                    l=m+1;
            }   
            else
            {
                if(l<m)
                    possible( l, m-1, nums, target, ans);
                if(m<h)
                    possible( m+1, h, nums, target, ans);
                break;
            }
        }
    }

    bool search(vector<int>& nums, int target) {

        bool ans=0;
        possible( 0, nums.size()-1, nums, target, ans);

        return ans;        
    }
};

int main()
{
    vector<int> nums={3, 4, 1, 2};
    int target = 1;

    Solution s;
    int ans = s.search(nums, target);

    cout << ans << endl;    

    return 0;
}