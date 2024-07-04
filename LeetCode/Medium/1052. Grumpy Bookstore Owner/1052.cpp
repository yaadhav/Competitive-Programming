#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {

        int t=0;
        for( int i=0; i<customers.size(); i++) {
            if( !grumpy[i] || i<minutes)
                t+=customers[i];
        }

        int maxx=t;
        for( int i=0, j=minutes; j<customers.size(); i++, j++) {
            t-=grumpy[i]*customers[i];
            t+=grumpy[j]*customers[j];
            maxx=max(t, maxx);
        }

        return maxx;
    }
};

int main()
{
    vector<int> customers={ 1, 2, 3, 4, 5, 7};
    vector<int> grumpy={ 1, 0, 1, 0, 0, 1, 0};
    int minutes=3;

    Solution sol;
    int ans = sol.maxSatisfied(customers, grumpy, minutes);  

    cout << ans;
    
    return 0;
}