#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if( nums.size()==0 )
            return 0;

        sort( nums.begin(), nums.end());

        int count=1, max=0;
        for( int i=1; i<nums.size(); i++)
        {
            if( nums[i]==nums[i-1]+1 )
                count++;
            else if( nums[i]-nums[i-1]>1 )
            {
                if( max<count )
                    max=count;
                count=1;
            }
        }

        if( max<count )
            max=count;

        return max;        
    }
};

int main()
{
    vector<int> nums={0,3,6,7,1,3,2,5,8,4,6,0,1};

    Solution s;
    cout << s.longestConsecutive(nums);
    
    return 0;
}