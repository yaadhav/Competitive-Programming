#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        
        int sum=0, ans=nums[0];

        for( int i=0; i<nums.size(); i++)
        {
            sum=max(sum+nums[i], nums[i]);
            ans=max(ans, sum);
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={-2,1,-3,4,-1,2,1,-5,4};

    Solution s;
    cout << s.maxSubArray(nums) << endl;
}