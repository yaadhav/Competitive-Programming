#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int> weigths, int days, int cap) {

        int c=0, reqDays=1;
        for( auto i: weigths)
        {
            if( c+i<=cap )
                c+=i;
            else
            {
                c=i;
                reqDays++;
            }
        }

        return reqDays<=days;
    }

    int shipWithinDays(vector<int>& weights, int days) {

        int l=*max_element(weights.begin(), weights.end()), 
            h=accumulate( weights.begin(), weights.end(), 0);

        while(l<=h)
        {
            int m=(l+h)/2;

            if( possible( weights, days, m) )
                h=m-1;
            else
                l=m+1;
        }

        return l;
    }
};

int main()
{
    vector<int> weights={ 1, 2, 3, 1, 1};
    int days=4;

    Solution s;
    int ans = s.shipWithinDays(weights,days);

    cout << ans << endl;

    return 0;
}