#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int> nums, int k, int sum) {

        int c=0, parts=0;
        for( int i=0; i<nums.size(); i++)
        {
            if( c+nums[i]<=sum )
                c+=nums[i];
            else
            {
                c=nums[i];
                parts++;
            }
        }

        return parts<k;
    }

    int splitArray(vector<int>& nums, int k) {

        long long int l=*max_element( nums.begin(), nums.end()),
            h=accumulate( nums.begin(), nums.end(), 0), ans=h;

        while(l<=h)
        {
            int m=(l+h)/2;

            if( possible( nums, k, m) )
            {
                ans=m;
                h=m-1;
            }
            else
                l=m+1;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums={1,-2,5,6,9};
    int k=2;

    Solution s;
    int ans = s.splitArray(nums, k);

    cout << ans << endl;    

    return 0;
}