#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    map<string,bool> dict;
    map<pair<int,string>, int> dp;

    int recurse( int ind, string ds, string s) {
        
        if( ind==s.length() )
            return dp[{ind, ds}]=(ds=="")+1;

        if( dp[{ind, ds}]!=0 ) 
            return dp[{ind, ds}];

        int notBreak = recurse( ind+1, ds+s[ind], s);

        int Break=1;
        if( dict[ds+s[ind]]==1 ) 
            Break = recurse( ind+1, "", s);

        return dp[{ind, ds}] = ((Break-1)|(notBreak-1))+1;
    }

    bool wordBreak(string s, vector<string>& wordDict) {
        
        for( string i: wordDict) 
            dict[i]=1;

        return recurse( 0, "", s)-1;
    }
};

int main()
{
    string s="antsaretiny";
    vector<string> wordDict={ "ants", "are", "tiny"};

    Solution sol;
    int ans = sol.wordBreak(s, wordDict);

    cout << ans << endl;
    
    return 0;
}