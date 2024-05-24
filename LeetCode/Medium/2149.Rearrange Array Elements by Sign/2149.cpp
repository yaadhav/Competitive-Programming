#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> res(nums.size());

        int p=0, n=1;

        for( int i:nums )
        {
            if(i>0) {
                res[p]=i;
                p+=2;
            }
            else {
                res[n]=i;
                n+=2;
            }
        }
        return res;
    }
};

int main()
{
    vector<int> nums={1,2,-3,5,-6,-7};

    Solution s;
    vector<int> res = s.rearrangeArray(nums);

    for( auto i: res)
    {
        cout << i << " ";
    }
    
    return 0;
}