#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        vector<pair<int,int>> check;
        for( auto i: intervals)
        {
            check.push_back({i[0],0});
            check.push_back({i[1],1});
        }

        sort( check.begin(), check.end());

        vector<vector<int>> ans;
        int curr=0, l=0;
        for( auto i: check)
        {
            if( i.second==1 )
            {
                if( curr==1 )
                    ans.push_back({l,i.first});
                curr--;
            }
            else
            {
                if( curr==0 )
                    l=i.first;
                curr++;
            }
        }
        return ans;
    }
};

int main()
{
    vector<vector<int>> intervals={{1,4},{3,8},{9,12},{10,16}};

    Solution s;
    vector<vector<int>> ans=s.merge(intervals);

    for( vector<int> i : ans)
    {
        for( int j: i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}