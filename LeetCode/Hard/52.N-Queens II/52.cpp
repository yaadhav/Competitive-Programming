#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void fillBoard( int i, int j, vector<string>& board) {

        int n=board.size();
        for( int k=0; k<n; k++) {
            if(board[i][k]=='.') board[i][k]='X';
            if(board[k][j]=='.') board[k][j]='X';
        }

        int y = min( i+j, n), x = y==n ? (i+j)%n:0;

        while( x<n && y>=0 ) {
            if(board[x][y]=='.') board[x][y]='X';
            x++, y--;
        }

        x=max(i-j,0), y=max(j-i,0);

        while( x<n && y<n ) {
            if(board[x][y]=='.') board[x][y]='X';
            x++, y++;
        }

    }

    void placingNQueens( int ind, int  n, vector<string> board, int& ans) {

        if( ind==n ) {
            ans++;
            return;
        }

        vector<string> temp=board;
        for( int j=0; j<n; j++) {

            if( board[ind][j]=='.' ) {

                board[ind][j]='Q';
                fillBoard( ind, j, board);

                placingNQueens( ind+1, n, board, ans);

                board=temp;
            }
        }
    }

    int totalNQueens(int n) {

        string s( n, '.');
        vector<string> board( n, s);

        int ans=0;
        placingNQueens( 0, n, board, ans);

        return ans;
    }
};

int main()
{
    int n=4;

    Solution s;
    int ans = s.totalNQueens(n);

    cout << ans << endl;

    return 0;
}