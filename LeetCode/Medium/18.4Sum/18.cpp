#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>> res;
        sort( nums.begin(), nums.end());

        for( int i=0; i<nums.size()-3; i++)
        {
            for( int j=i+2, k=nums.back(); j<k; )
            {
                cout << i << j << k << endl;
                if( nums[i]+nums[i+1]+nums[j]+nums[k]>target )
                {
                    k--;
                    while( nums[k]==nums[k-1] && j>k )
                        k--;
                }
                else if( nums[i]+nums[i+1]+nums[j]+nums[k]<target )
                {
                    j++;
                    while( nums[j]==nums[j-1] && j>k )
                        j++;
                }
                else
                {
                    res.push_back( { nums[i], nums[i+1], nums[j], nums[k]});
                    j++; k--;
                    while( nums[k]==nums[k-1] && j>k )
                        k--;
                    while( nums[j]==nums[j-1] && j>k )
                        j++;
                }
            }
        }

        return res;
    }
};

int main()
{
    vector<int> nums={ -5, -4, -3, -3, -2, -2, 0, 1, 3, 3, 5};
    int target=-11;

    Solution s;
    vector<vector<int>> res=s.fourSum(nums, target);

    for( auto i: res)
    {
        for( auto j: i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}