#include<bits/stdc++.h>
using namespace std;

int mod=1e9+7;

class Solution {
public:
    int numDistinct(string s1, string s2) {

        int n=s1.length(), m=s2.length();

        vector<int> dp(m+1);

        dp[0]=1;

        for( int i=1; i<=n; i++) {
            for( int j=m; j>=1; j--) {
                if( s1[i-1]==s2[j-1] )
                    dp[j]+=dp[j-1]%mod;
                dp[j]%=mod;
            }
        }

        return dp[m];     
    }
};

int main()
{
    string s1="babgbag";
    string s2="bag";

    Solution sol;
    int ans=sol.numDistinct(s1, s2);

    cout << ans;

    return 0;
}