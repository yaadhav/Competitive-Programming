#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Solution {
public:
    vector<string> ans;

    void combinations( int ind, int c, ll prev, string ds, string s) {
        if( ind==s.size() && c==3 ) {
            if( prev<=255 ) 
                ans.push_back(ds);
            return;
        }

        if( c>3 ) return;

        for( int i=ind; i<s.size(); i++) {

            string comb=s.substr( ind, i-ind+1);
            ll cval=stoll(comb);

            if( (i>ind && s[ind]=='0') || prev>255 ) break;

            if( ind==0 ) combinations( i+1, c, cval, comb, s);
            else combinations( i+1, c+1, cval, ds+"."+comb, s);
        }
    }

    vector<string> restoreIpAddresses(string s) {
        combinations( 0, 0, 0, "", s);
        return ans;
    }
};

int main()
{
    string str="25525511135";

    Solution s;
    vector<string> ans=s.restoreIpAddresses(str);

    for( auto i: ans) 
        cout << i << endl;
    
    return 0;
}