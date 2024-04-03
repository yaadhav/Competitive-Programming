#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        vector<int> prod1, prod2(nums.size());

        int p=1;
        for( int i: nums)
        {
            p*=i;
            prod1.push_back(p);
        }

        p=1;
        for( int i=nums.size()-1; i>=0; i--)
        {
            p*=nums[i];
            prod2[i]=p;
        }

        vector<int> res={prod2[1]};
        for( int i=1; i<nums.size()-1; i++)
            res.push_back(prod1[i-1]*prod2[i+1]);
        res.push_back(prod1[nums.size()-2]);

        
        return res; 
    }
};

int main()
{
    vector<int> nums={-1,1,0,-3};

    Solution s;

    vector<int> res = s.productExceptSelf(nums);

    for( int i: res)
        cout << i << " ";
    
    return 0;
}