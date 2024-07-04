#include<bits/stdc++.h>
using namespace std;

class Solution{
public:

    bool checkPalindrome( int i, int j, string &s) {
        while( i<j ) {
            if( s[i]!=s[j] )
                return 0;
            i++, j--;
        }

        return 1;
    }

    int minCut(string s) {

        int n=s.size();
        vector<int> dp(n+1, n);

        dp[n]=0;
        for( int i=n-1; i>=0; i--) {
            for( int j=i; j<n; j++) {
                if( checkPalindrome( i, j, s) )
                    dp[i]=min( dp[i], dp[j+1]+1);
            }
        }

        return dp[0]-1;
    }
};

int main()
{
    string s="cbdbabcd";
                            
    Solution sol;
    int ans=sol.minCut(s);
    cout << ans << endl; 

    return 0;
}