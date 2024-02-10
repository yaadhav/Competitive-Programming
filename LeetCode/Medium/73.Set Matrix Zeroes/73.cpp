#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {

        set<int> row, col;

        for( int i=0; i<matrix.size(); i++)
        {
            for( int j=0; j<matrix[i].size(); j++)
            {
                if( matrix[i][j]==0 )
                {
                    row.insert(i);
                    col.insert(j);
                }
            }
        }

        for( int i: row)
        {
            for( int j=0; j<matrix[i].size(); j++)
                matrix[i][j]=0;
        }

        for( int i: col)
        {
            for( int j=0; j<matrix.size(); j++)
                matrix[j][i]=0;
        }        
    }
};

int main()
{
    vector<vector<int>> matrix={{0,1,2},{1,0,1},{2,3,4},{1,2,3}};

    Solution s;
    s.setZeroes(matrix);

    for( auto i: matrix)
    {
        for( auto j: i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}