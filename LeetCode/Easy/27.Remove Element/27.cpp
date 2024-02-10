#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {

        vector<int> res;
        for( auto i : nums)
        {
            if( i!=val )
                res.push_back(i);
        }
        nums=res;

        return res.size();        
    }
};

int main()
{
    vector<int> nums={0,1,2,2,3,0,4,2};
    int k=2;

    Solution sol;
    int result=sol.removeElement(nums,k);
    cout << result << endl;
    for( auto i : nums)
        cout << i << " ";
}