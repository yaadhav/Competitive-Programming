#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {

        int l=1, h=nums.size()-1;

        while( l<=h )
        {
            int m=(l+h)/2;

            if( nums[m]==target )
                return m;
            else if( nums[m]>target )
                h=m-1;
            else
                l=m+1;
        }

        return -1;        
    }
};

int main()
{
    vector<int> nums={1,2,3,4,5,6,7};
    int target=10;

    Solution sol;
    int res=sol.search(nums,target);

    cout << res << endl;

    return 0;
}