#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size(),  m=matrix[0].size();

        int row=0, col=m-1;

        while( row<n && col>=0 )
        {
            if( matrix[row][col]==target )
                return true;
            else if( matrix[row][col]>target )
                col--;
            else
                row++;
        }

        return false;
    }
};

int main()
{
    int target=16;
    vector<vector<int>> matrix={{1}};

    Solution s;
    cout << s.searchMatrix(matrix,target) << endl;
}