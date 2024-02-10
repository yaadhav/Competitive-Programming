#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n, m;
    char a[100][100];
    cin >> n >> m;

    bool check=false;
    for( int i=0; i<n; i++)
    {
        for( int j=0; j<m; j++)
        {
            cin >> a[i][j] ;

            if( a[i][j]!='W' && a[i][j]!='B' && a[i][j]!='G' )
                check=true;
        }
    }

    if( check )
        cout << "#Color" ;
    else
        cout << "#Black&White" ;
        
    return 0;
}
