// Q : https://leetcode.com/problems/two-sum/

#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        vector<int> temp=nums;
        sort( temp.begin(), temp.end());
        
        int i=0, j=temp.size()-1;
        while( i<j )
        {
            if(temp[i]+temp[j]<target)
                i++;
            else if(temp[i]+temp[j]>target)
                j--;
            else
                break;
        }

        vector<int> ans={ -1, -1};

        for( int a=0; a<nums.size(); a++)
        {
            if( nums[a]==temp[i] && ans[0]==-1)
                ans[0]=a;
            else if( nums[a]==temp[j])
                ans[1]=a;
        }

        return ans;
    }
};

int main()
{
    vector<int> nums;
    int n, temp, target;

    cin >> n >> target ;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        nums.push_back(temp);
    }
        
    Solution s;
    vector<int> ans=s.twoSum(nums,target);

    for( auto i: ans)
        cout << i << " ";

    return 0;
}
