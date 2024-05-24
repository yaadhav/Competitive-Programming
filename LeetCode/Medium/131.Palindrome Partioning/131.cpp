#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool checkPalindrome( string  s ) {

        int n=s.length()-1;
        for( int i=0; i<n-i; i++)  {
            if( s[i]!=s[n-i] )
                return 0;
        }
        return 1;
    }

    void possibleSubstrings( int ind, string s,  vector<string> ds, vector<vector<string>>& ans) {

        if( ind==s.length() ) {
            ans.push_back(ds);
            return;
        }

        string c="";
        for( int i=ind; i<s.length(); i++) {
            c+=s[i];

            if( checkPalindrome(c) ) {
                ds.push_back(c);
                possibleSubstrings( i+1, s,  ds, ans);
                ds.pop_back();
            }
        }
    }

    vector<vector<string>> partition(string s) {

        vector<vector<string>> ans={};
        possibleSubstrings( 0, s, {}, ans);

        return ans;
    }
};

int main()
{
    string str="aab";

    Solution s;
    
    vector<vector<string>> ans=s.partition(str);

    for( auto i: ans) {
        for(  auto j: i)
            cout << j << " ";
        cout << endl;
    }
}