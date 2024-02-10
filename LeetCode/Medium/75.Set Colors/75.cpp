#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ans(3, 0);

        for( int i: nums)
            ans[i]++;

        for( int i=0, k=0; i<3; i++)
        {
            for( int j=0; j<ans[i]; j++, k++)
                nums[k]=i;
        }
    }
};

int main()
{
    vector<int> nums={2};

    Solution s;
    s.sortColors(nums);

    for( auto i: nums)
        cout << i << " ";

    return 0;
}