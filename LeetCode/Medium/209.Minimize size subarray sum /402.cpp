#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int> nums, int target, int size ) {

        int sum=0;

        for( int i=0; i<size; i++) 
            sum+=nums[i];

        if(sum>=target)
            return 1;

        for( int i=size, j=0; i<nums.size(); i++, j++){
            sum+=nums[i]-nums[j];

            if(sum>=target)
                return 1;
        }

        return 0;
    }

    int minSubArrayLen(int target, vector<int>& nums) {

        int l=1, h=nums.size();

        while(l<=h) {
            
            int m=(l+h)/2;

            if(possible( nums, target, m)) 
                h=m-1;
            else
                l=m+1;
        }
        
        return l==nums.size()+1 ? 0:l;
    }
};

int main()
{
    vector<int> nums={2,3,1,2,4,3}; 
    int target=4;

    Solution s;
    int ans = s.minSubArrayLen(target, nums);

    cout << ans << endl;

    return 0;
}

    