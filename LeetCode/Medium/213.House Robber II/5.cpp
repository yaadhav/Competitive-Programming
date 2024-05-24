#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int rob(vector<int>& nums) {

        int n=nums.size();

        if( n==1 ) 
            return nums[0];

        vector<int> dp1(n-1), dp2(n-1);

        dp1[0]=nums[0], dp1[1]=max( nums[0], nums[1]);

        for( int i=2; i<n-1; i++) {
            int p=nums[i]+dp1[i-2];
            int np=dp1[i-1];

            dp1[i]=max( p, np);
        }

        dp2[0]=nums[1], dp2[1]=max( nums[1], nums[2]);

        for( int i=2; i<n-1; i++) {
            int p=nums[i+1]+dp2[i-2];
            int np=dp2[i-1];

            dp2[i]=max( p, np);
        }

        return max(dp1[n-2], dp2[n-2]);
    }
};

int main()
{
    int n=4;
    vector<int> nums={ 5, 1, 1, 6, 2, 3, 10};

    Solution s;
    int ans = s.rob(nums);

    cout << ans;

    return 0;
}