#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    char s[4][4];
    bool check=false;

    for( int i=0; i<4; i++)
    {
        for( int j=0; j<4; j++)
            cin >> s[i][j];
    }

    for( int i=0; i<3; i++)
    {
        for( int j=0; j<3; j++)
        {
            if( s[i][j]==s[i+1][j+1] && (s[i][j]==s[i+1][j] || s[i][j]==s[i][j+1]) )
                check=true;
            if( s[i+1][j]==s[i][j+1] && (s[i+1][j]==s[i][j] || s[i+1][j]==s[i+1][j+1]) )
                    check=true;
        }
    }

    if(check)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
    
    return 0;
}
