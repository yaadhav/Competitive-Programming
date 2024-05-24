#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int>& piles, int h, int k) {

        int c=0;

        for( int i=0; i<piles.size(); i++)
            c+=(piles[i]+k-1)/k;

        return c<=h;
    }

    int minEatingSpeed(vector<int>& piles, int h) {

        int low=1, high=*max_element(piles.begin(), piles.end()), ans=high;

        while( low<=high )
        {
            int mid = low+(high-low)/2;

            if( possible( piles, h, mid) )
                high=mid-1;
            else
                low=mid+1;
        }

        return low;
    }
};

int main()
{
    vector<int> piles={3,6,7,11};
    int h=8;

    Solution s;
    int ans = s.minEatingSpeed(piles, h);

    cout << ans << endl;    

    return 0;
}