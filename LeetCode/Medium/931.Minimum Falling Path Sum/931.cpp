#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        
        int m=matrix.size(), n=matrix[0].size();

        vector<vector<int>> dp( m, vector<int>(n, INT_MAX));

        for( int i=0; i<n; i++)
            dp[0][i]=matrix[0][i];

        for( int i=0; i<m; i++) {
            for( int j=0; j<n; j++) {
                if( i-1>=0 )
                    dp[i][j]=min( dp[i][j], dp[i-1][j]+matrix[i][j]);
                if( i-1>=0 && j-1>=0 )
                    dp[i][j]=min( dp[i][j], dp[i-1][j-1]+matrix[i][j]);
                if( i-1>=0 && j+1<n )
                    dp[i][j]=min( dp[i][j], dp[i-1][j+1]+matrix[i][j]);
                if( i==m-1 && j-1>=0 )
                    dp[i][j]=min( dp[i][j], dp[i][j-1]);
            }
        }

        return dp[m-1][n-1];
    }
};


int main()
{
    vector<vector<int>> matrix = {
        {2,1,3},
        {6,5,4},
        {7,8,9}
    };

    Solution s;
    int ans = s.minFallingPathSum(matrix);

    cout << ans;

    return 0;
}