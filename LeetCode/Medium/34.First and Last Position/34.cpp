
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int l=0, h=nums.size()-1, ans1=-1, ans2=-1;

        while( l<=h )
        {
            int m=(l+h)/2;

            if( nums[m]==target )
            {
                ans1=m;
                l=m+1;
            }
            else if( nums[m]>target )
                h=m-1;
            else
                l=m+1;
        }

        if(ans1>=0)
            ans1=h;

        l=0, h=nums.size()-1;
        while( l<=h )
        {
            int m=(l+h)/2;

            if( nums[m]==target )
            {
                ans2=m;
                h=m-1;
            }
            else if( nums[m]>target )
                h=m-1;
            else
                l=m+1;
        }

        if(ans2>=0)
            ans2=l;

        return {ans2,ans1};  
    }
};

int main()
{
    vector<int> nums={2, 7, 11, 15, 18, 19, 19, 19, 19};
    int target = 19;

    Solution s;
    vector<int> ans = s.searchRange(nums, target);

    cout << ans[0] << " " << ans[1] << endl;    

    return 0;
}