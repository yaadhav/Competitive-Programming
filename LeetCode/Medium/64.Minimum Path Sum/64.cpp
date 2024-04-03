#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void solve( int i, int j, int cost, vector<vector<int>> grid, long long int &ans)
    {
        if( i==grid.size()-1 && j==grid[0].size()-1 )
        {
            long long int check=cost+grid[i][j];
            ans = min( check, ans);
            return;
        }

        cost+=grid[i][j];
        if( i+1<grid.size() )
            solve( i+1, j, cost, grid, ans);
        if( j+1<grid[0].size() )
            solve( i, j+1, cost, grid, ans);

        return;
    }

    int minPathSum(vector<vector<int>>& grid) 
    {
        long long int ans=INT_MAX;
        solve( 0, 0, 0, grid, ans);

        return ans;        
    }
};

int main()
{
    vector<vector<int>> grid={ { 1, 2, 3}, { 4, 5, 6}};

    Solution s;
    cout << s.minPathSum(grid) << endl;

    cout << grid.size() << grid[0].size() << endl;
}