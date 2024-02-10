#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        
        vector<int> check=nums;
        sort( check.rbegin(), check.rend());

        if( check==nums )
        {
            sort( nums.begin(), nums.end());
            return;
        }

        int i, j;
        for( i=nums.size()-2; nums[i]>=nums[i+1]; i--);
        for(j=nums.size()-1; j > i && nums[j] <= nums[i]; j--);
        
        swap( nums[i], nums[j]);
        sort( nums.begin()+i+1, nums.end());     
    }
};

int main()
{
    vector<int> nums={1,2};

    Solution s;
    s.nextPermutation(nums);

    for( auto i: nums)
        cout << i << " ";
    
    return 0;
}