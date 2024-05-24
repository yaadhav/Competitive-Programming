#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int n=matrix.size(), m=matrix[0].size();

        int low=0, high=m*n-1;

        while( low<=high )   {
            int mid=(low+high)/2;

            int row=mid/m, col=mid%m;

            if( matrix[row][col]==target )
                return true;
            else if( matrix[row][col]>target )
                high=mid-1;
            else
                low=mid+1;
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