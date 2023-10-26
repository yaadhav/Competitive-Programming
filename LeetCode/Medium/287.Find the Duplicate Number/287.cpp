#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        vector<int> temp=nums;

        sort( temp.begin(), temp.end());

        int ans;
        for( int i=1; i<temp.size(); i++)
        {
            if( temp[i]==temp[i-1] )
            {
                ans=temp[i];
                break;
            }
        }       

        return ans;                       
    }
};

int main()
{
    vector<int> nums={1,3,4,2,2};

    Solution s;
    cout << s.findDuplicate(nums);
    
    return 0;
}