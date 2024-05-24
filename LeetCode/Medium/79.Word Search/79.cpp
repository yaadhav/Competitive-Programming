#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    void wordSearch( int i, int j, int ind, vector<vector<char>>& board, string word, bool &ans) {

        int n=board.size(), m=board[0].size();

        if( ind==word.size() ) {
            ans=1;
            return;
        }

        if( i<0 || j<0 || i==n || j==m || board[i][j]!=word[ind] || board[i][j]=='!' || ans )
            return;

        char c=board[i][j];
        board[i][j]='!';
        wordSearch( i+1, j, ind+1, board, word, ans);
        wordSearch( i, j+1, ind+1, board, word, ans);
        wordSearch( i-1, j, ind+1, board, word, ans);
        wordSearch( i, j-1, ind+1, board, word, ans);
        board[i][j]=c;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int n=board.size(), m=board[0].size();
        bool ans=0;

        for( int i=0; i<n; i++) {
            for( int j=0; j<m; j++) {
                if( board[i][j]==word[0] ) {
                    wordSearch( i, j, 0, board, word, ans);
                }
            }
        }

        return ans;
    }
};

int main()
{
    vector<vector<char>> board={
        {'A','A','A','A','A','A'},
        {'A','A','A','A','A','A'},
        {'A','A','A','A','A','A'},
        {'A','A','A','A','A','A'},
        {'A','A','A','A','A','B'},
        {'A','A','A','A','B','A'}
    };

    string word="AAAAAAAAAAAAABB";

    Solution s;
    cout << s.exist( board, word);
    
    return 0;
}