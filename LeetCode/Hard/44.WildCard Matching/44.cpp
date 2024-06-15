#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool isMatch(string s, string p) {
        int n=s.length(), m=p.length();

        vector<bool> prev(m+1), ds(m+1);

        prev[0]=1;
        for( int j=1; j<=m; j++) {
            if( p[j-1]=='*' )
                prev[j]=prev[j-1];
        }

        for( int i=1; i<=n; i++) {
            for( int j=m; j>=1; j++) {
                if( s[i-1]==p[j-1] )
                    ds[j]=prev[j-1];
                else {
                    if( p[j-1]=='*' ) 
                        ds[j]=prev[j-1] || ds[j-1] || prev[j];
                    else if( p[j-1]=='?' )
                        ds[j]=prev[j-1];
                    else
                        ds[j]=0;
                }
            }
            prev=ds;
        }

        return prev[m];
    }
};

int main()
{
    string s="ab", p="*a*b*";

    Solution sol;
    bool ans=sol.isMatch( s, p);

    cout << ans << endl;

    return 0;
}