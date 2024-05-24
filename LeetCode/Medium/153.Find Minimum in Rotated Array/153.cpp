#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMin(vector<int>& nums) {

        int l=0, h=nums.size()-1, ans=nums.back();

        while(l<=h)
        {
            int m=(l+h)/2;

            ans=min( ans, nums[m]);

            if( nums[m]<nums[h] )
                h=m-1;
            else
                l=m+1;
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