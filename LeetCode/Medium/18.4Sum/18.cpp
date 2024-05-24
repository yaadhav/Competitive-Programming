#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        sort( nums.begin(), nums.end());

        vector<vector<int>> res;
        for( int a=0; a<nums.size(); a++)
        {
            if(a==0);
            else if( nums[a]==nums[a-1] ) continue;

            for( int b=a+1; b<nums.size(); b++)
            {
                if( res.size()==0 );
                else if( res.back()[0]==nums[a] && res.back()[1]==nums[b] )
                    continue;

                for( int c=b+1, d=nums.size()-1; c<d; )
                {
                    long long int sum=nums[a];
                    sum+=nums[b];
                    sum+=nums[c];
                    sum+=nums[d];

                    if( sum==target ) {

                        if( res.size()==0 ) 
                            res.push_back({nums[a], nums[b], nums[c], nums[d]});
                        else if( res.back()[0]!=nums[a] || res.back()[1]!=nums[b] ||  res.back()[2]!=nums[c] || res.back()[3]!=nums[d] )
                            res.push_back({nums[a], nums[b], nums[c], nums[d]});

                        c++, d--;
                    }
                    else if( sum<target ) c++;
                    else d--;
                }
            }
        }

        return res;
    }
};

int main()
{
    int n=1e9;
    vector<int> nums={ n, n, n, n};
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