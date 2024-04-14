#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findPeakElement(vector<int>& nums) {

        nums.push_back(INT_MIN);

        int l=1, h=nums.size()-2, ans=0;

        while(l<=h)
        {
            int m=(l+h+1)/2;

            cout << l << m << h << " " << nums[m] << endl;

            if( nums[m]<nums[m+1] ) 
                l=m+1;
            else if( nums[m]>nums[m-1] )
            {
                ans=m;
                break;
            }
            else
                h=m-1;
        } 

        return ans;        
    }
};

int main()
{
    vector<int> nums={8,7,6,5,4,3,2,1,-1,-2,-3};

    Solution s;
    int ans = s.findPeakElement(nums);

    cout << ans << endl;
    

    return 0;
}