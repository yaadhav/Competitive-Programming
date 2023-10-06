#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        vector<int> p, n;

        for( auto i : nums)
        {
            if( i>0 )
                p.push_back(i);
            else
                n.push_back(i);
        }

        for( int i=0, j=0; i<nums.size(); i+=2, j++)
        {
            nums[i]=p[j];
            nums[i+1]=n[j];            
        }

        return nums;        
    }
};

int main()
{
    vector<int> nums={1,2,-3,5,-6,-7};

    Solution s;
    vector<int> res = s.rearrangeArray(nums);

    for( auto i: res)
    {
        cout << i << " ";
    }
    
    return 0;
}