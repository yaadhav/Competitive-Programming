#include<bits/stdc++.h>
using namespace std;

bool cmp( vector<int> &a, vector<int> &b) { return a[1]<b[1]; }

class Solution {
public:

    int eraseOverlapIntervals(vector<vector<int>>& intervals) {

        sort( intervals.begin(), intervals.end(), cmp );

        int ans=0, end=intervals[0][1]; 
        for( int i=1; i<intervals.size(); i++)
        {
            if( intervals[i][0]>=end )
                end=intervals[i][1];
            else
                ans++;
        }

        return ans;
    }
};

int main()
{
    vector<vector<int>> intervals={ {1,2},{2,3},{3,4},{1,3}, {1,2}};

    Solution s;
    cout << s.eraseOverlapIntervals(intervals) << endl;
}