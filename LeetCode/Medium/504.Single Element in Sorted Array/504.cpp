#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {

        int l=1, h=nums.size()-2;

        if( nums[0]!=nums[1] )
            return nums[0];
        if( nums.back()!=nums[h] )
            return nums.back();

        while(l<=h)
        {
            int m=(l+h)/2;

            if( nums[m]==nums[m+1] )
            {
                if( (nums.size()-m)%2==0 )
                    h=m-1;
                else
                    l=m+1;
            }
            else if( nums[m-1]==nums[m] )
            {
                if( (nums.size()-m-1)%2==0 )
                    h=m-1;
                else
                    l=m+1;
            }
            else
                return nums[m];
        } 

        return -1;        
    }
};

int main()
{
    vector<int> nums={1,1,2,3,3,4,4,8,8};

    Solution s;
    int ans = s.singleNonDuplicate(nums);

    cout << ans << endl;    

    return 0;
}