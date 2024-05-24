#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void merge( vector<int>& arr, int low, int mid, int high, vector<int>& ans) {

        int l=low, r=mid+1;
        vector<int> s;

        while( l<=mid && r<=high) {

            if( arr[l]<=arr[r] ) {
                s.push_back(arr[l]);
                l++;
            }
            else {
                s.push_back(arr[r]);
                ans[l]++;
                r++;
            }
        }

        while(l<=mid) {
            s.push_back(arr[l]);
            l++;
        }

        while(r<=high) {
            s.push_back(arr[r]);
            r++;
        }

        for( int i=0; i<s.size(); i++)
            arr[low+i]=s[i];
    }

    void mergeSort( vector<int>& arr, int low, int high, vector<int>& ans) {
        if( low==high )
            return;

        int mid=(low+high)>>1;

        mergeSort( arr, low, mid, ans);
        mergeSort( arr, mid+1, high, ans);
        merge( arr, low, mid, high, ans);
    }

    vector<int> countSmaller(vector<int>& nums) {
        
        vector<int> ans(nums.size());

        mergeSort( nums, 0, nums.size()-1, ans);

        return ans;
    }
};

int main()
{
    vector<int> nums={1, 2, 1, 3, 4, 2, 4, 1, 3, 2};

    Solution s;
    vector<int> ans = s.countSmaller(nums);

    for( auto i: ans)
        cout << i << " ";
    cout << endl;  

    return 0;
}