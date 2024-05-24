#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePaths(int m, int n) {

        if( m==1 || n==1 )
            return 1;

        vector<vector<int>> dp( m, vector<int>(n));

        dp[0][1]=1, dp[1][0]=1;

        for( int i=0; i<m; i++) {
            for( int j=0; j<n; j++) {
                int d=0, r=0;
                if( i-1>=0 ) dp[i][j]+=dp[i-1][j];
                if( j-1>=0 ) dp[i][j]+=dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};

int main()
{
    int m=3, n=2;

    Solution s;
    cout << s.uniquePaths(m,n) << endl;
}