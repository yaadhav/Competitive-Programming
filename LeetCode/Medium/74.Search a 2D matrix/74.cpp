#include<bits\stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        bool ans=0;
        for( int i=0; i<matrix.size(); i++)
        {
            if( matrix[i].back()<target )
                continue;
            for( int j=0; j<matrix[i].size(); j++)
            {
                if( matrix[i][j]==target )
                {
                    ans=1;
                    break;
                }
            }
        }
        
        return ans;
    }
};

int main()
{
    int target=60;
    vector<vector<int>> matrix={{1,3,5,7},{10,11,16,20},{23,30,34,60}};

    Solution s;
    cout << s.searchMatrix(matrix,target) << endl;
}