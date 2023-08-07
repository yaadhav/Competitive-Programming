#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {

        int l=nums1.size();
        for( int i=0; i<l-m; i++)
        {
            cout << i << endl;
            nums1.pop_back();
        }

        for( int i=0; i<n; i++)
            nums1.push_back(nums2[i]);

        sort(nums1.begin(), nums1.end());        
    }
};

int main()
{
    int m, n;
    cin >> m >> n;

    vector<int> nums1, nums2;
    int temp;

    for( int i=0; i<6; i++)
    {
        cin >> temp;
        nums1.push_back(temp);
    }

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        nums2.push_back(temp);
    }

    Solution sol;
    sol.merge(nums1,m,nums2,n);

    for( auto i : nums1)
        cout << i << " ";
    

    return 0;
}