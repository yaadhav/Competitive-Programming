#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void fillBoard( vector<string> &board, int i, int j) {
        
        int n=board.size();

        for( int k=0; k<n; k++) {
            if(board[i][k]=='X') board[i][k]='.';
            if(board[k][j]=='X') board[k][j]='.';
        }

        int y=min( n-1, i+j), x= y==n-1 ? i+j-n+1:0;

        while( x<n &&  y>=0 ) {
            if(board[x][y]=='X') board[x][y]='.';
            x++, y--;
        }        

        x=max( 0, i-j), y=max( j-i, 0);

        while( x<n &&  y<n ) {
            if(board[x][y]=='X') board[x][y]='.';
            x++, y++;
        }      
    }

    void placingNQueens( int n, int ind, vector<string> board,vector<vector<string>>& ans) {

        if(ind==n) {
            ans.push_back(board);
            return;
        }

        vector<string> temp=board;
        for( int j=0; j<n; j++)
        {
            if( board[ind][j]=='X' ) {

                board[ind][j]='Q';

                fillBoard( board, ind, j);
                placingNQueens( n, ind+1, board, ans);

                board=temp;
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {

        vector<vector<string>> ans;

        string s( n, 'X');
        vector<string> board(n, s);
        
        placingNQueens( n, 0, board, ans);

        return ans;
    }
};

int main()
{
    int n=4;

    Solution s;
    vector<vector<string>> ans = s.solveNQueens(n);

    for( auto i: ans) {
        for( auto j: i)
            cout << j << endl;
        cout << endl;
    }

    return 0;
}