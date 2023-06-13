#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int> res;
        for( int i=1; i<nums.size(); i++)
        {
            if( nums[i]!=nums[i-1] )
                res.push_back(nums[i-1]);
        }
        res.push_back(nums[nums.size()-1]);
        nums=res;
        
        return res.size();
    }
};

int main()
{
    vector<int> nums={1,1,1,2,2,3,3,4,4};

    Solution sol;
    int result=sol.removeDuplicates(nums);
    cout << result << endl;
    for( auto i : nums)
        cout << i << " ";
}