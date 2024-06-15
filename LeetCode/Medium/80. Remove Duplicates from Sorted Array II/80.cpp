#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

        int c=1, ind=0;
        for( int i=1; i<nums.size(); i++) {
            if( nums[i]==nums[i-1] ) {
                c++;
                if(c<3) ind++;
            }
            else c=1, ind++;
            nums[ind]=nums[i];
        }

        return ind+1;
    }
};

int main()
{
    vector<int> nums={ 1,1,1,2,2,2,3,3,3};

    Solution s;
    int k = s.removeDuplicates(nums);

    for( int i=0; i<k; i++)
        cout << nums[i] << " ";
    cout << endl;
    
    return 0;
}