#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    bool possibleToPlace( vector<vector<char>>& board, int x, int y, char n ) {

        for( int i=0; i<9; i++) {
            if( board[x][i]==n || board[i][y]==n )
                return 0;
        }
        
        x=(x/3)*3, y=(y/3)*3;
        for( int i=x; i<x+3; i++) {
            for( int j=y; j<y+3; j++) {
                if( board[i][j]==n )
                    return  0;
            }
        }
        
        return 1;
    }

    void sudokuSolver( int x, int y, vector<vector<char>>& board, bool& end) {

        if(end) return;

        if( board[x][y]!='.' ) {

            if( y==8 && x==8 ) {
                end=1;
                return;
            }
            else if( y==8 )
                sudokuSolver( x+1, 0, board, end);
            else 
                sudokuSolver( x, y+1, board, end);
            
            return;
        }

        for( char n='1'; n<='9'; n++) {

            if( possibleToPlace( board, x, y, n) ) {
                board[x][y]=n;

                if( y==8 && x==8 ) {
                    end=1;
                    return;
                }
                else if( y==8 ) 
                    sudokuSolver( x+1, 0, board, end);
                else 
                    sudokuSolver( x, y+1, board, end);

                if(end) return;

                board[x][y]='.';
            }
        }
    }

    void solveSudoku( vector<vector<char>>& board ) {
        bool end=0;
        sudokuSolver( 0, 0, board, end);
    }
};

int main()
{
    vector<vector<char>> board;

    board={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','2','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };

    Solution s;
    s.solveSudoku(board);

    for( auto i: board) {
        for( auto j: i)
            cout << j << " ";
        cout << endl;
    }

    return 0;
}