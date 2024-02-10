#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
 
    int n, m;
    cin >> n >> m;

    int c[101][101];
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<m; j++)
            cin >> c[i][j];
    }

    int ans=0, small;
    for( int i=0; i<n; i++)
    {
        small=c[i][0];
        for( int j=0; j<m; j++)
        {
            if( small>c[i][j] )
                small=c[i][j];
        }
        if( ans<small )
            ans=small;
    }

    cout << ans << endl ; 

    return 0;
}