#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    int countSquares(vector<vector<int>>& matrix) {

        int n=matrix.size(), m=matrix[0].size();
        vector<int> prev(m), cur(m);

        int count=0;
        for( int j=0; j<m; j++) {
            prev[j]=matrix[0][j];
            count+=matrix[0][j];
        }

        for( int i=1; i<n; i++) {
            cur[0]=matrix[i][0];
            count+=cur[0];
            for( int j=1; j<m; j++) {
                if( matrix[i][j] )
                    cur[j]=min(prev[j-1], min( prev[j], cur[j-1]))+1;
                else
                    cur[j]=0;
                count+=cur[j];
            }
            prev=cur;
        }

        return count;
    }
};

int main()
{
    vector<vector<int>> matrix={
        {1,0,1},
        {1,1,0},
        {1,1,0}
    };
                            
    Solution sol;
    int ans=sol.countSquares(matrix);

    cout << ans << endl; 

    return 0;
}