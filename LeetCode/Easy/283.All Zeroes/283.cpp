#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        int s=1;
        for( int i=0; i+s<nums.size(); i++)
        {
            if( nums[i]==0 && nums[i+s]==0 )
            {
                s++;
                i--;
            }
            else if( nums[i]==0 )
            {
                nums[i]=nums[i+s];
                nums[i+s]=0;
            }            
        }
    }
};

int main()
{
    vector<int> nums={ 0, 1, 0, 3, 4, 0 ,5 };

    Solution s;
    s.moveZeroes(nums);
    for( int i: nums)
        cout << i << " ";
    
    return 0;
}