#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {

        int n=nums.size();
        unordered_map<int,int> hash;

        int sum=0;
        hash[0]=1;
        for( int i=0; i<n; i++) {
            sum=(sum+(nums[i]%k))%k;

            if( hash[sum]<i+1 && hash[sum]>0 )
                return 1;

            if( hash[sum]==0 )
                hash[sum]=i+2;
        }

        return 0;
    }
};

int main()
{
    vector<int> nums={ 23, 2, 4, 6, 7, 11};
    int k=16;

    Solution s;
    int ans = s.checkSubarraySum( nums, k);
    cout << ans;

    return 0;
}