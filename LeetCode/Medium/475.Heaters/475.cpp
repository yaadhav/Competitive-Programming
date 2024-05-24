#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int> houses, vector<int> heaters, int r) {

        int poss=1, ind=0;

        for( int i=0; i<houses.size() && poss; )
        {
            if( abs(houses[i]-heaters[ind])<=r )
                i++;
            else if( heaters[ind]>houses[i] )
                poss=0;
            else
            {
                if( ind<heaters.size()-1 )
                    ind++;
                else
                    poss=0;
            }
        }

        return poss;
    }

    int findRadius(vector<int>& houses, vector<int>& heaters) {

        sort( houses.begin(), houses.end());
        sort( heaters.begin(), heaters.end());

        int l=1, h=max( abs(houses[0]-heaters.back()), abs(houses.back()-heaters[0]) );

        while( l<=h )
        {
            int m=(l+h)/2;
            bool poss = possible( houses, heaters, m);
            
            if(poss)
                h=m-1;
            else
                l=m+1;
        }

        return l;
    }
};

int main()
{
    vector<int> houses={ 1, 5}, heaters={2};

    Solution s;
    int ans = s.findRadius(houses, heaters);

    cout << ans << endl;

    return 0;
}