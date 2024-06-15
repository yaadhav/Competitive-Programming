#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    string longestPalindrome(string s) {
        int n=s.length();
        vector<vector<int>> dp( n+1, vector<int>(n+1));

        for( int i=0; i<n; i++) 
            dp[i][i]=1;

        for( int i=0; i<n-1; i++) {
            if( s[i]==s[i+1] )
                dp[i][i+1]=1;
        }

        int ind=0, len=0;
        for( int i=0; i<n; i++) {
            for( int j=0; j<i; j++) {
                if( s[i]==s[j] && dp[i-1][j+1] )
                    dp[i][j]=1;

                if( dp[i][j] && i-j+1>len ) {
                    ind=j;
                    len=i-j+1;
                }
            }
        }    

        for( auto i: dp) {
            for( int j: i)
                cout << j << " ";
            cout << endl;
        }

        return s.substr( ind, len);   
    }
};

int main()
{
    string s ="cbbd";

    Solution sol;
    string ans = sol.longestPalindrome(s);

    cout << ans;

    return 0;
}