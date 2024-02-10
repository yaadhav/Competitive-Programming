#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {

        int first=0, mid, last=nums.size()-1, index;

        while(first<=last)
        {         
            mid=(first+last)/2;

            if(nums[mid]==target)
                return mid;
            else if(nums[mid]>target)
                last=mid-1;
            else
                first=mid+1;
        } 

        if( nums[mid]<target)
            mid++;

        return mid;
    }
};

int main()
{
    int n, target=4;
    cin >> n >> target;

    vector<int> nums={1,2,3,5,6,7,8,9,10,11,12};
    int temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }

    Solution sol;
    int result=sol.searchInsert(nums,target);
    cout << result << endl;
}