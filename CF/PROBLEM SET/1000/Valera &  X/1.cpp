#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector<string> p;
    string temp;

    for( int i=0; i<n; i++)
    {
        cin >> temp;
        p.push_back(temp);
    } 

    bool check=true;

    if( p[0][0]==p[0][1] )
        check=false;

    for( int i=0; i<n && check; i++)
    {
        for( int j=0; j<n; j++)
        {
            if( p[i][i]!=p[0][0] || p[i][n-1-i]!=p[0][0] )
                check=false;

            if( i!=j && j!=(n-1-i) && p[i][j]!=p[0][1] )
                check=false;
        }
    }

    if( check )
        cout << "YES" ;
    else    
        cout << "NO" ;

    return 0;
}
