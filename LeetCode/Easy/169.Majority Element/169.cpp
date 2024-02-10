#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        sort( nums.begin(), nums.end());

        int count=1, n=nums.size(), ans, c=1;
        for( int i=0; i<n-1; i++)
        {
            if( nums[i]==nums[i+1] )
                count++;
            else
            {
                if( count>n-count )
                {
                    ans=nums[i];
                    c=0;
                    break;
                }
                count=1;
            }
        }

        if( count>n-count && c==1 )
            ans=nums.back();
            
        return ans;
    }
};

int main()
{
    vector<int> nums={3,3,4};
    
    Solution sol;
    cout << sol.majorityElement(nums);
    
    return 0;
}