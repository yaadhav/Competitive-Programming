#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int subarraysDivByK(vector<int>& nums, int k) {

        map<int,int> hash;
        hash[0]=1;

        int sum=0;
        for( int i: nums) {
            sum=(sum+(i%k))%k;
            if( sum<0 ) sum+=k;
            hash[sum]++;
        }

        int ans=0;
        for( auto i: hash) {
            int n=i.second;
            ans+=(n*(n-1))/2;
        }

        return ans; 
    }
};


int main()
{
    vector<int> nums={4,5,0,-2,-3,1};
    int k=5;

    Solution sol;
    int ans = sol.subarraysDivByK(nums, k);

    cout << ans;

    return 0;
}