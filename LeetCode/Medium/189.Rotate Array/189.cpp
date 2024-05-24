#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        k%=n;
        if(k==0) return;

        int j=n-k;
        for( int i=0; i<n-n%k; i++) {
            swap( nums[i], nums[j]);

            j++;
            if( j==n ) 
                j=n-k;
        }

        if(n%k==0)
            return;

        j=n-k;
        for( int i=n-n%k; i<n-1; i++)
            swap( nums[i], nums[j]);
    }
};

int main()
{
    vector<int> nums={7,7,7,7,12,7,7};
    int k=3;

    Solution s;
    s.rotate(nums, k);

    for( auto i: nums)
        cout << i << " ";
    cout << endl;    

    return 0;
}