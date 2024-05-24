#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void mergeParts( vector<int>& nums, int low, int mid, int high, int& ans){

        vector<int> s;

        int l=low, r=mid+1;
        while( l<=mid && r<=high ){
            if( nums[l]<=nums[r] ) {
                s.push_back(nums[l]);
                l++;
            }
            else {
                s.push_back(nums[r]);
                ans+=mid-l+1;
                r++;
            }
        }

        while(l<=mid) {
            s.push_back(nums[l]);
            l++;
        }

        while(r<=high) {
            s.push_back(nums[r]);
            r++;
        }

        for( int i=low, j=0; i<=high; i++, j++)
            nums[i]=s[j];

        l=low, r=mid+1;
    }

    void mergeSort( vector<int>& nums, int low, int high , int& ans) {

        if(low==high)
            return;
        
        int mid=(low+high)>>1;

        mergeSort( nums, low, mid, ans);
        mergeSort( nums, mid+1, high, ans);
        mergeParts( nums, low, mid, high, ans);
    }
};

int main()
{
    vector<int> nums={5, 3, 4, 2, 1};

    int ans=0;

    Solution s;
    s.mergeSort(nums, 0, nums.size()-1, ans);

    cout << ans << endl;

    return 0;
}