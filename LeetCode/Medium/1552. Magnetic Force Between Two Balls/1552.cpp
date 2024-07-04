#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possible( vector<int> position, int m, int dist) {

        int last=position[0];
        for( int i=1; i<position.size() && m>1; i++) {
            if( position[i]-last>=dist ) {
                last=position[i];
                m--;
            }
        }

        return m==1;
    }

    int maxDistance(vector<int>& position, int m) {

        sort( position.begin(), position.end());
    
        int low=1, high=position.back()-position.front();

        while( low<=high ) {
            int mid=(low+high)>>1;

            if( possible( position, m, mid))
                low=mid+1;
            else 
                high=mid-1;
        }

        return high;
    }
};

int main()
{
    vector<int> position={ 1, 2, 3, 4, 5, 7};
    int m=6;

    Solution sol;
    int ans = sol.maxDistance(position, m);  

    cout << ans;
    
    return 0;
}