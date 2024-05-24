#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {

        int ans=0;
        vector<int> z;

        for( int i=0; i<nums.size(); i++) {
            if( nums[i]==0 ) {
                cout << i << " ";
                z.push_back(i);
            }
        }
        
        cout << endl;
        
        int i=k-1, j=0, c;

        while( i<z.size() ) {
            c=z[i]-z[j]+1;

            if(j>0) c+=z[j]-z[j-1]-1;
            else c+=z[j];

            if(i+1<z.size()) c+=z[i+1]-z[i]-1;
            else c+=nums.size()-z[i]-1;

            cout << c << endl;

            ans=max( ans, c);
            i++, j++;

        }

        return ans;
        
    }
};

int main()
{
    vector<int> nums={ 0, 0, 0, 1};
    int k=4;

    Solution s;
    int ans = s.longestOnes(nums,k);

    cout << ans << endl;

    return 0;
}