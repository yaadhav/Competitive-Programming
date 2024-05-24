#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int Search( vector<int> nums1, vector<int> nums2) {

        int n=nums1.size(), m=nums2.size();
        if( n>m ) return Search( nums2, nums1);

        int low=0, high=n;
        int med=(n+m+1)/2;

        while( low<=high )
        {
            int mid=(low+high)/2, ind=med-mid;

            int l1=INT_MIN, l2=l1;
            int r1=INT_MAX, r2=r1;

            if( mid-1>=0 ) l1=nums1[mid-1];
            if( ind-1>=0) l2=nums2[ind-1];
            if( mid<n ) r1=nums1[mid];
            if( ind<m ) r2=nums2[ind];
            
            if( l1<=r2 && l2<=r1 )
            {
                if((m+n)%2==0)
                    return max(l1,l2)+min(r1,r2);
                else
                    return max(l1,l2)*2;
            }
            else if( l1>r2 )
                high=mid-1;
            else
                low=mid+1;
        }

        return 0;
    }

    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        int ans=Search( nums1, nums2);
        return double(ans)/2;
    }
};

int main()
{
    vector<int> nums1={1,2,5,6,9,10}, nums2={3,4,7,8};
    Solution s;
    double ans = s.findMedianSortedArrays(nums1, nums2);

    cout << ans << endl;    

    return 0;
}