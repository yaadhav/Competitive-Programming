#include<bits/stdc++.h>
using namespace std;

typedef long long int ll;

class Solution {
public:

    int recurse( int ind, string s) {

        cout << ind << endl;

        if( ind==s.size() )
            return 1;
        if( ind==s.size()-1 )
            return s[ind]!='0';
        if( s[ind]=='0') 
            return 0;

        int one=recurse( ind+1, s);

        int two=0;
        if( s[ind]<'2' || (s[ind]=='2' && s[ind+1]<='6') )
            two=recurse( ind+2, s);

        return one+two;
        
    }

    int numDecodings(string s) {
        int n=s.size();
        vector<int> dp(n+1);

        dp[n]=1, dp[n-1]=s.back()!='0';
        for( int i=n-2; i>=0; i--) {
            dp[i]=dp[i+1];
            if( s[i]<'2' || (s[i]=='2' && s[i+1]<='6') )
                dp[i]+=dp[i+2];
            if( s[i]=='0' )
                dp[i]=0;
        }

        return dp[0];
    }
};

int main()
{
    string s="213013";

    Solution sol;
    int ans=sol.numDecodings(s);

    cout << ans << endl;
    
    return 0;
}