#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int>& nums, int threshold, int d) {

        int c=0;
        for( int i=0; i<nums.size(); i++)
            c+=(nums[i]+d-1)/d;

        return c<=threshold;        
    }

    int smallestDivisor(vector<int>& nums, int threshold) {

        int l=1, h=*max_element(nums.begin(), nums.end());

        while( l<=h )
        {
            int m=(l+h)/2;

            if( possible( nums, threshold, m))
                h=m-1;
            else
                l=m+1;
        }

        return l;
    }
};

int main()
{
    vector<int> nums={1,2,5,9};
    int threshold=6;

    Solution s;
    int ans = s.smallestDivisor(nums, threshold);

    cout << ans << endl;    

    return 0;
}