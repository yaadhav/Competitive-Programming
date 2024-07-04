#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool recurse( int i, int j, string s) {

        if( i==j )
            return s[i]=='t';

        if( s[i]=='!' ) 
            return !recurse( i+2, j-1, s);
        else {
            int open=0, st=i+1;
            for( int end=i+2; end<j; end++) {
                if( open==0 && s[end]==',' ) {
                    bool res=recurse( st+1, end-1, s);

                    if( s[i]=='&' && res==0 )
                        return 0;
                    if( s[i]=='|' && res==1 )
                        return 1;

                    st=end;
                }
                open+=(s[end]=='(')-(s[end]==')');
            }

            return recurse( st+1, j-1, s);
        }
    }

    bool parseBoolExpr(string s) {

        int n=s.length();

        vector<vector<int>> dp( n, vector<int>(n, -1));

        for( int i=n-1; i>=0; i--) {
            dp[i][i]=s[i]=='t';

            for( int j=i+1; j<n; j++) {

                if( s[i]=='!' ) 
                    dp[i][j] = !dp[i+2][j-1];
                else if ( s[i]=='&' || s[i]=='|' ) {
                    int open=0, st=i+1;

                    for( int end=i+2; end<j; end++) {
                        if( open==0 && s[end]==',' ) {
                            bool res=dp[st+1][end-1];

                            if( s[i]=='&' && res==0 ) {
                                dp[i][j]=0;
                                break;
                            }
                            if( s[i]=='|' && res==1 ) {
                                dp[i][j]=1;
                                break;
                            }
                            st=end;
                        }
                        open+=(s[end]=='(')-(s[end]==')');
                    }

                    if( dp[i][j]==-1 )
                        dp[i][j]=dp[st+1][j-1];
                }
            }
        }

        return dp[0][n-1];
    }
};

int main()
{
    string experssion="!(&(f,t))";
                            
    Solution sol;
    int ans=sol.parseBoolExpr(experssion);
    cout << ans << endl; 

    return 0;
}