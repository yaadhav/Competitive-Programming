#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int minPathSum(vector<vector<int>>& grid) {    

        int m=grid.size(), n=grid[0].size();

        vector<vector<int>> dp( m, vector<int>(n));

        dp[0][0]=grid[0][0];

        for( int i=0; i<m; i++) {
            for( int j=0; j<n; j++) {
                int up=INT_MAX, left=INT_MAX; 
                if( i-1>=0 ) up=dp[i-1][j]+grid[i][j];
                if( j-1>=0 ) left=dp[i][j-1]+grid[i][j];
                
                if( i>0 || j>0 )
                dp[i][j]=min( up, left);
            }
        } 

        return dp[m-1][n-1];
    }
};


int main()
{
    vector<vector<int>> grid = {
        { 1, 3, 1},
        { 4, 3, 5},
        { 3, 2, 4}
    };

    Solution s;
    int ans = s.minPathSum(grid);

    cout << ans;

    return 0;
}