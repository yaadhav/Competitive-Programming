#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minPatches(vector<int>& nums, int n) {
        
        sort( nums.begin(), nums.end() );

        int sum=0, ans=0;
        for( int i=0; i<nums.size() && sum<n; i++ ) {
            if( nums[i]>sum+1) {
                sum+=sum+1;
                i--;
                ans++;
                continue;
            }
            sum+=nums[i];
        }

        while( sum<n ) {
            sum+=sum+1;
            ans++;
        } 

        return ans;
    }
};

int main()
{
    vector<int> nums={1,3};
    int n=14;

    Solution sol;
    int ans=sol.minPatches(nums, n);

    cout << ans << endl;

    return 0;
}