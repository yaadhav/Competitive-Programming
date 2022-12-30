#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main()
{
    int t;
    cin >> t ;

    for( int cases=0; cases<t; cases++)
    {
        int m;
        cin >> m;

        vector<vector<char>> wall(2, vector<char>(m)); 
        for ( int i=0; i<2; i++ )   
        {
            for( int j=0; j<m; j++ )
                cin >> wall[i][j] ;
            
        }
        
        for ( int i=0; i<2; i++ )   
        {
            for( int j=0; j<m; j++ )
            {
                cout << wall[i][j] << "  ";
            }
            cout << endl ;
        }
    }   
    return 0;
}
