#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m=obstacleGrid.size(), n=obstacleGrid[0].size();

        vector<vector<int>> dp( m, vector<int> (n));

        dp[0][0]=1-obstacleGrid[0][0];

        for( int i=0; i<m; i++) {
            for( int j=0; j<n; j++) {
                if( obstacleGrid[i][j]==1 ) continue;
                if( i-1>=0 ) dp[i][j]+=dp[i-1][j];
                if( j-1>=0 ) dp[i][j]+=dp[i][j-1];
            }
        }

        return dp[m-1][n-1];
    }
};

int main()
{
    vector<vector<int>> obstacleGrid = {
        { 0, 0, 0},
        { 0, 1, 0},
        { 0, 0, 0}
    };

    Solution s;
    int ans = s.uniquePathsWithObstacles(obstacleGrid);

    cout << ans;

    return 0;
}