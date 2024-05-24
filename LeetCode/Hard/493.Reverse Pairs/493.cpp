#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge( vector<int> &arr, int low, int mid, int high, int &ans){

        int l=low, r=mid+1;

        while( l<=mid && r<=high ) {
            if( arr[l]>arr[r]*2 ) {
                ans+=mid-l+1;
                r++;
            }
            else l++;
        } 

        vector<int> s;
        l=low, r=mid+1;

        while( l<=mid && r<=high )  {
            if( arr[l]<=arr[r] ) {
                s.push_back(arr[l]);
                l++;
            }
            else {
                s.push_back(arr[r]);
                r++;
            }
        }

        while( l<=mid ) {
            s.push_back(arr[l]);
            l++;
        }

        while( r<=high )   {
            s.push_back(arr[r]);
            r++;
        }

        for( int i=0; i<s.size(); i++)
            arr[low+i]=s[i];
    }

    void mergeSort( vector<int> &arr, int low, int high, int &ans) {

        if( low==high )
            return;

        int mid=(low+high)>>1;

        mergeSort( arr, low, mid, ans);
        mergeSort( arr, mid+1, high, ans);
        merge( arr, low, mid, high, ans);
    }

    int reversePairs(vector<int>& nums) {

        int ans=0;
        mergeSort( nums, 0, nums.size()-1, ans);

        return ans;        
    }
};

int main()
{
    vector<int> nums={1, 2, 1, 3, 4, 2, 5, 1, 3, 2};

    Solution s;
    int ans = s.reversePairs(nums);

    for( auto i: nums)
        cout << i << " ";
    cout<< endl;

    cout << ans << endl;

    return 0;
}