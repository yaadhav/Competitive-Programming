#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<pair<string,string>> ds;

        for( string s: strs) {
            ds.push_back({ s, s});
            sort( ds.back().first.begin(), ds.back().first.end());
        }

        sort( ds.begin(), ds.end());

        vector<vector<string>> ans;
        vector<string> vec={ds[0].second};
        for( int i=1; i<strs.size(); i++) {
            if( ds[i].first==ds[i-1].first ) 
                vec.push_back(ds[i].second);
            else {
                ans.push_back(vec);
                vec.clear();
                vec.push_back(ds[i].second);
            }
        }

        ans.push_back(vec);
        
        return ans;
    }
};

int main()
{
    vector<string> strs={"ate","eat","nat","tan","tne","tea"};

    Solution sol;
    vector<vector<string>> ans=sol.groupAnagrams(strs);

    for( auto i : ans)
    {
        for( auto j: i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}