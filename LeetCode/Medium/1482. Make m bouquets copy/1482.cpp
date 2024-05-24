#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int>& bloomDay, int m, int k, int d) {

        int c=0;
        for( int i=0; i<bloomDay.size() && m>0; i++)
        {
            if( bloomDay[i]<=d )
                c++;
            else
                c=0;

            if( c==k )
            {
                m--;
                c=0;
            }
        }

        return !m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {

        if( m*k>bloomDay.size() )
            return -1;

        int l=1, h=*max_element( bloomDay.begin(), bloomDay.end()), ans=h;

        while( l<=h )
        {
            int mid = (l+h)/2;

            if( possible( bloomDay, m, k, mid) )
                h=mid-1;
            else
                l=mid+1;
        }

        return l;
    }
};

int main()
{
    vector<int> bloomDay={7,7,7,7,12,7,7};
    int m=2, k=3;

    Solution s;
    int ans = s.minDays(bloomDay, m, k);

    cout << ans << endl;    

    return 0;
}