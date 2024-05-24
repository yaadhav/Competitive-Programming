#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort( nums.begin(), nums.end());

        vector<vector<int>> ans;

        for( int i=0; i<nums.size(); i++)
        {
            if( i==0 );
            else if( nums[i-1]==nums[i] ) continue;
        
            for( int j=i+1, k=nums.size()-1; j<k; )
            {
                int sum=nums[i]+nums[j]+nums[k];

                if( sum==0 ) {

                    if( ans.size()==0 )
                        ans.push_back({nums[i], nums[j], nums[k]});
                    else if( ans.back()[1]!=nums[j] || ans.back()[2]!=nums[k] )
                        ans.push_back({nums[i], nums[j], nums[k]});

                    j++, k--;
                }
                else if( sum<0 ) j++;
                else k--;
            }
        }

        return ans;        
    }
};

int main()
{
    vector<int> nums={ -5, -4, -3, -3, -2, -2, 0, 1, 3, 3, 5};

    Solution s;
    vector<vector<int>> res=s.threeSum(nums);

    for( auto i: res)
    {
        for( auto j: i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}