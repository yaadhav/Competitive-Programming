#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int hIndex(vector<int>& citations) {

        int n=citations.size();
        int l=0,  h=n-1;

        while(l<=h) {
            int m=(l+h)>>1;

            if( citations[m]<=n-m )
                l=m+1;
            else
                h=m-1;
        }

        if(h==-1) h=n-1;

        return max(n-l, min(n-h, citations[h]));
    }
};

int main()
{
    vector<int> nums={1,2,3,4,5,6}; 

    Solution s;
    int ans = s.hIndex(nums);

    cout << ans << endl;

    return 0;
}

    