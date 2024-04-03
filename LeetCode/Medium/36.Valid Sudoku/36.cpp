#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        vector<vector<int>> row( 9, vector<int> (9)), col( 9, vector<int> (9)), box( 9, vector<int> (9));

        for( int i=0; i<9; i++)
        {
            for( int j=0; j<9; j++)
            {
                int a=i/3, b=j/3;
                if( board[i][j]!='.' )
                {
                    row[i][board[i][j]-'1']++;
                    box[(a*3)+b][board[i][j]-'1']++;
                }
                if( board[j][i]!='.' )
                    col[i][board[j][i]-'1']++;
            }
        }    

        bool res=1;
        for( int i=0; i<9; i++)
        {
            for( int j=0; j<9; j++)
            {
                if( row[i][j]>1 || col[i][j]>1 || box[i][j]>1 )
                {
                    res=0;
                    break;
                }
            }
        }    

        return res;
    }
};

int main()
{
    vector<vector<char>> board={{'.','.','.','.','5','.','.','1','.'},
                                {'.','4','.','3','.','.','.','.','.'},
                                {'.','.','.','.','.','3','.','.','1'},
                                {'8','.','.','.','.','.','.','2','.'},
                                {'.','.','2','.','7','.','.','.','.'},
                                {'.','1','5','.','.','.','.','.','.'},
                                {'.','.','.','.','.','2','.','.','.'},
                                {'.','2','.','9','.','.','.','.','.'},
                                {'.','.','4','.','.','.','.','.','.'}};

    Solution s;

    cout << s.isValidSudoku(board);
    
}