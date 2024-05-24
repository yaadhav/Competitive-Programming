#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int recurse( int m, int n, vector<vector<int>> triangle) {

        if( m==0 && n==0 )
            return triangle[0][0];

        int up=INT_MAX, lc=up, f=up;
        if( m-1>=0 && n<triangle[m-1].size() ) 
            up=recurse( m-1, n, triangle)+triangle[m][n];
        if( m-1>=0 && n-1>=0 ) 
            lc=recurse( m-1, n-1, triangle)+triangle[m][n];
        if( m==triangle.size()-1 && n-1>=0 ) 
            f=recurse( m, n-1, triangle);

        return min( min( up, lc), f);
    }

    int minimumTotal(vector<vector<int>>& triangle) {
        
        int n=triangle.size();
        
        vector<vector<int>> dp={{triangle[0][0]}};

        for( int i=2; i<=n; i++) {
            vector<int> row(i, INT_MAX);
            dp.push_back(row);
        }

        for( int i=1; i<n; i++) {
            for( int j=0; j<=i; j++) {
                if( i>=1 && j<i )
                    dp[i][j]=min( dp[i][j], dp[i-1][j]+triangle[i][j]);
                if( i>=1 && j>=1 )
                    dp[i][j]=min( dp[i][j], dp[i-1][j-1]+triangle[i][j]);
                if( i==n-1 && j>=1 )
                    dp[i][j]=min( dp[i][j], dp[i][j-1]);
            }
        }

        return dp[n-1][n-1];

    }
};


int main()
{
    vector<vector<int>> triangle = {
        {2},
        {6,5},
        {7,8,9}
    };

    Solution s;
    int ans = s.minimumTotal(triangle);

    cout << ans;

    return 0;
}