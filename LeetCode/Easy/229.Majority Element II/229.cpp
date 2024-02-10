#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {

        sort( nums.begin(), nums.end());

        int count=1, n=nums.size();
        vector<int> ans;
        for( int i=0; i<n-1; i++)
        {
            if( nums[i]==nums[i+1] )
                count++;
            else
            {
                if( count>(n/3) )
                    ans.push_back(nums[i]);
                count=1;
            }
        }

        if( count>(n/3) )
            ans.push_back(nums.back());
            
        return ans;
    }
};

int main()
{
    vector<int> nums={3,3,4};
    
    Solution sol;
    vector<int> ans=sol.majorityElement(nums);

    for( auto i : nums)
        cout << i << " ";
    
    return 0;
}