#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        int l=0, h=nums.size()-1, ans1=-1, ans2=-1;

        while( l<=h )
        {
            int mid=(l+h+1)/2;

            if( nums[mid]==target )
            {
                ans1=mid;
                l=mid+1;
            }
            else if( nums[mid]>target )
                h=mid-1;
            else
                l=mid+1;
        }

        if(ans1>=0)
            ans1=h;

        l=0, h=nums.size()-1;
        while( l<=h )
        {
            int mid=(l+h+1)/2;

            if( nums[mid]==target )
            {
                ans2=mid;
                h=mid-1;
            }
            else if( nums[mid]>target )
                h=mid-1;
            else
                l=mid+1;
        }

        if(ans2>=0)
            ans2=l;

        return {ans2,ans1};  
        
    }
};

int main()
{
    int n, target;
    cin >> n >> target;

    vector<int> nums(n);

    for( int &i: nums)
        cin >> i;

    Solution sol;
    vector<int> result=sol.searchRange(nums,target);

    cout << result[0] << " " << result[1];
}