#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {

        vector<pair<int,int>> ds;

        for( int i=0; i<plantTime.size(); i++)
            ds.push_back({ growTime[i], plantTime[i]});

        sort( ds.rbegin(), ds.rend());

        int cur=0, ans=0;
        for( int i=0; i<plantTime.size(); i++) {
            cur+=ds[i].second;
            ans=max( ans, cur+ds[i].first);
        }
        
        return ans;
    }
};

int main()
{
    vector<int> plantTime={ 1, 3, 4, 2};
    vector<int> growTime={ 3, 5, 4, 3};

    Solution sol;
    int ans=sol.earliestFullBloom( plantTime, growTime);

    cout << ans << endl;

    return 0;
}