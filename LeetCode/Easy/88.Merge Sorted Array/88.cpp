#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        vector<int> ans;
        int l=0, r=0;
        while( l<m-n && r<n )
        {
            if( nums1[l]<nums2[r] )
            {
                ans.push_back(nums1[l]);
                l++;
            } 
            else
            {
                ans.push_back(nums2[r]);
                r++;
            }
        }    
        
        for( int i=l; i<m-n; i++)
            ans.push_back(nums1[i]);
        for( int i=r; i<n; i++)
            ans.push_back(nums2[i]);

        nums1=ans;
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> nums1, nums2;
    int temp;

    for( int l=0; l<m; l++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }

    for( int l=0; l<n; l++)
    {
        cin >> temp;
        nums2.push_back(temp);
    }

    Solution sol;
    sol.merge(nums1,m,nums2,n);

    for( auto l : nums1)
        cout << l << " ";
    

    return 0;
}