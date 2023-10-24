#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {

        int n=matrix.size();
        vector<vector<int>> temp=matrix;

        for( int i=n-1; i>=0; i--)
        {
            for( int j=0; j<n; j++)
                matrix[j][i]=temp[n-1-i][j];
        }
    }
};

int main()
{
    vector<vector<int>> matrix={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};

    Solution s;
    s.rotate(matrix);

    for( vector<int> i : matrix)
    {
        for( int j: i)
            cout << j << " ";
        cout << endl;
    }
    
    return 0;
}